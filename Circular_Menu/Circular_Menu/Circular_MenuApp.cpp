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
	
	menu = new CircMenu(5);
	menu->setBaseTexture(poGetTexture("buttons/Path_Icon_base.png"));
	menu->setIconTexture(poGetTexture("buttons/Path_Icon_icon.png"));
	menu->setHighlightTexture(poGetTexture("buttons/Path_Icon_highlight.png"));
	menu->position.set(getWindowWidth()/2,getWindowHeight()/2,0);
	menu->setRange(CIRC_MENU_QUART_TOP_RIGHT);
	addChild(menu);
	
	control = new poControlPanel( "controlPanel", poColor(0,0.3,0.3,0.6) );
	
	control->addSliderF( "duration",0.f, 1.f, this );
	control->addSliderF( "delay",0.f, 1.0f, this );
	control->addSliderF( "bounce",1.f, 5.f, this );
	control->addSliderF( "amp",100.f, 500.f, this );
	control->addSliderI( "children",1, 20, this );
	
	std::vector<std::string> radioOptions;
	radioOptions.push_back("top_left_quart");
	radioOptions.push_back("top_right_quart");
	radioOptions.push_back("bottom_left_quart");
	radioOptions.push_back("bottom_right_quart");
	radioOptions.push_back("top_half");
	radioOptions.push_back("bottom_half");
	radioOptions.push_back("left_half");
	radioOptions.push_back("right_half");
	radioOptions.push_back("full");
	
	control->addRadio("arrange", radioOptions, this );
	
	addChild(control);
	control->autoResize();
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
	if ( msg == "duration" ) {
        menu->setDuration(control->getFloat("duration"));
    }
	
	if ( msg == "delay" ) {
        menu->setDelay(control->getFloat("delay"));
    }
	
	if ( msg == "bounce" ) {
        menu->setBounce(control->getFloat("bounce"));
    }
	
	if ( msg == "amp" ) {
        menu->setAmp(control->getFloat("amp"));
    }
	
	if ( msg == "children" ) {
        menu->setNumButtons(control->getInt("children"));
    }
	
	if ( msg == "arrange" ) {
        menu->setRange(control->getInt("arrange"));
	}
	
}
