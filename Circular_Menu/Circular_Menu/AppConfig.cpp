/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "Circular_MenuApp.h"

poObject *createObjectForID(uint uid) {
	return new Circular_MenuApp();
}

void setupApplication() {
	lookUpAndSetPath("resources");
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "Circular_Menu", 100, 100, 1024, 768);
}

void cleanupApplication() {
}