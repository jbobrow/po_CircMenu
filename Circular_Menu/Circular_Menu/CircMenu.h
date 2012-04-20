#pragma once

/*	Created by Jonathan Bobrow on 3/25/12.
 *	Copyright 2012 Potion. All rights reserved.
 */

#include "poObject.h"
#include "CircButton.h"
#include "Common.h"

enum CircMenuRange{
	CIRC_MENU_QUART_TOP_LEFT,
	CIRC_MENU_QUART_TOP_RIGHT,
	CIRC_MENU_QUART_BOTTOM_LEFT,
	CIRC_MENU_QUART_BOTTOM_RIGHT,
	CIRC_MENU_HALF_TOP,
	CIRC_MENU_HALF_BOTTOM,
	CIRC_MENU_HALF_LEFT,
	CIRC_MENU_HALF_RIGHT,
	CIRC_MENU_FULL
};

class CircMenu : public CircButton
{
public:
	CircMenu(int numButtons, int size = 130);
	virtual ~CircMenu();
	
	virtual void update();
	virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
	
	virtual void pressEvent();
	
	void addButton();
	void setRange(int start, int end);
	void setRange(CircMenuRange r);
	
	void open();
	void close();
	
	float	openDuration;
	float	closeDuration;
	float	openDelay;
	float	closeDelay;
	
	float	amp;
	
	std::vector<CircButton *> buttons;
	
	int	rangeBegin;
	int	rangeEnd;
	
	bool isOpen;
};