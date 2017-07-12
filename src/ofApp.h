#pragma once

#include "ofMain.h"
#include "BaseScreen.hpp"
#include "start_screen.hpp"
#include "end_screen.hpp"

#include "main_screen_01.hpp"
#include "main_screen_02.hpp"
#include "main_screen_03.hpp"

#define Screen_NUM 5

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
    
    //複数のシーンを格納する動的配列
    vector <BaseScreen *> screens;
    
    //現在のシーン番号
    int currentScreen;
    
    
    


    
};
