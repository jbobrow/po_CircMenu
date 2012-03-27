#include "CircButton.h"

CircButton::CircButton(int size)
{
	isPressed = false;
	
	base = new poRectShape(size,size);
	base->setAlignment(PO_ALIGN_CENTER_CENTER);
	addChild(base);
	
	icon = new poRectShape(size,size);
	icon->setAlignment(PO_ALIGN_CENTER_CENTER);
	addChild(icon);
	
	highlight = new poRectShape(size,size);
	highlight->setAlignment(PO_ALIGN_CENTER_CENTER);
	addChild(highlight);
	
//	addEvent(PO_MOUSE_DOWN_INSIDE_EVENT,this);
//	addEvent(PO_MOUSE_MOVE_EVENT,this);
//	addEvent(PO_MOUSE_UP_EVENT, this);
}

CircButton::~CircButton() 
{
}

void CircButton::update() 
{
}

void CircButton::setBaseTexture(poTexture *tex)
{
	base->placeTexture(tex, PO_TEX_FIT_EXACT);
}

void CircButton::setIconTexture(poTexture *tex)
{
	icon->placeTexture(tex, PO_TEX_FIT_EXACT);
}

void CircButton::setHighlightTexture(poTexture *tex)
{
	highlight->placeTexture(tex, PO_TEX_FIT_EXACT);
}


void CircButton::eventHandler(poEvent *event)
{
//	switch(event->type){
//			
//		case PO_MOUSE_DOWN_INSIDE_EVENT:
//			isPressed = true;
//			icon->alpha = .5f;
//			break;
//			
//		case PO_MOUSE_MOVE_EVENT:
//			break;
//			
//		case PO_MOUSE_UP_EVENT:
//			if(!isPressed) return;
//			icon->alpha = 1.f;
//			isPressed = false;
//			break;
//	}
}

void CircButton::messageHandler(const std::string &msg, const poDictionary& dict) 
{
}
