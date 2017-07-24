#pragma once

#include "ofMain.h"
#include "BaseScreen.hpp"
#include "start_screen.hpp"
#include "end_screen.hpp"

#include "main_screen_01.hpp"

#define Screen_NUM 5

enum class AppScreen{
    StartScreen = 0,
    MainScreen_01,
    EndScreen,
};


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        void changeScreen(AppScreen screen);
    
private:
    BaseScreen *getCurrentScreen();
    
    int currentScreen = 0;


    
};

