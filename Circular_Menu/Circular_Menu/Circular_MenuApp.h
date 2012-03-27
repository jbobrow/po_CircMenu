/*	Created by Jonathan Bobrow on 3/25/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "poObject.h"
#include "CircMenu.h"

class Circular_MenuApp : public poObject {
public:
	Circular_MenuApp();
	virtual ~Circular_MenuApp();
	
    virtual void update();
    
    virtual void draw();
	
    virtual void eventHandler(poEvent *event);
	
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());

	CircMenu *menu;
};

