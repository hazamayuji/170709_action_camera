//
//  main_screen_01.hpp
//  170709_action_camera
//
//  Created by Áã≠ÈñìÁ•êËá≥ on 2017/07/11.
//
//

#pragma once

#include "ofMain.h"
#include "BaseScreen.hpp"
#include "start_screen.hpp"
#include "ofApp.h"

#include "ofxOpenCv.h"


class main_screen_01 : public BaseScreen{
public:
    
    void setup();
    void update();
    void draw();
    
    int kintore_count = 0;
    
    //顔認識
    ofVideoGrabber cam;
    
    //数える人
    ofVideoPlayer test_count[6];
    
    
};
