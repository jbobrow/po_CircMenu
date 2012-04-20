#pragma once

/*	Created by Jonathan Bobrow on 3/25/12.
 *	Copyright 2012 Potion. All rights reserved.
 */

#include "poObject.h"
#include "poShapeBasics2D.h"
#include "Common.h"

class CircButton : public poObject
{
public:
	CircButton(int size = 130);
	virtual ~CircButton();
	
	virtual void update();
	virtual void eventHandler(poEvent *event);
	virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
	
	virtual void pressEvent();
	
	void setBaseTexture(poTexture* tex);
	void setIconTexture(poTexture* tex);
	void setHighlightTexture(poTexture* tex);
	
	poRectShape	*base;
	poRectShape	*icon;
	poRectShape	*highlight;
	
	bool	isPressed;
};