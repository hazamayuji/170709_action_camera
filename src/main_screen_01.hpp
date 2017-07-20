//
//  main_screen_01.hpp
//  170709_action_camera
//
//  Created by 狭間祐至 on 2017/07/11.
//
//

#pragma once

#include "ofMain.h"
#include "BaseScreen.hpp"
#include "start_screen.hpp"

#include "ofxCv.h"
using namespace ofxCv;
using namespace cv;

#include "ofxFaceTrackerThreaded.h"

#define INPUT_MOVIE_WSIZE   640
#define INPUT_MOVIE_HSIZE   480

class main_screen_01 : public BaseScreen{
public:
    
    void setup();
    void update();
    void draw();
    
    int kintore_count = 0;
    
    ofVideoGrabber cam;
    ofxFaceTrackerThreaded tracker;
    
   
};
