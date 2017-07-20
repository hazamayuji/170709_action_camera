#pragma once

#include "ofMain.h"
#include "BaseScreen.hpp"
#include "start_screen.hpp"
#include "end_screen.hpp"

#include "main_screen_01.hpp"

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
    
        
      //int currentScreen;
    
    
    //簡単にする
    int box_y = ofGetHeight()/2 + 50;
    int box_width = ofGetWidth()/4.2666;
    int box_height = ofGetHeight()/7.6;
    
    bool Press_button_1 = false;
    bool Press_button_2 = false;
    bool Press_button_3 = false;
    
    bool Press_button_end = false;
    
    


    
};
