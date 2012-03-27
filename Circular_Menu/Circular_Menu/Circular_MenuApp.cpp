/*	Created by Jonathan Bobrow on 3/25/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "Circular_MenuApp.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
Circular_MenuApp::Circular_MenuApp() {
	addModifier(new poCamera2D(poColor::black));
	
	poRectShape	*bg = new poRectShape("ghostly.jpg");
	addChild(bg);
	
	menu = new CircMenu();
	menu->position.set(80,getWindowHeight()-80,0);
	for(int i=0; i<5; i++){
		menu->addButton();
	}
	menu->setRange(CIRC_MENU_QUART_TOP_RIGHT);
	addChild(menu);
}

// APP DESTRUCTOR. Delete all objects here.
Circular_MenuApp::~Circular_MenuApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void Circular_MenuApp::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void Circular_MenuApp::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void Circular_MenuApp::eventHandler(poEvent *event) {

}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void Circular_MenuApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
