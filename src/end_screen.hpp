//
//  end_screen.hpp
//  170709_action_camera
//
//  Created by 狭間祐至 on 2017/07/09.
//
//

#pragma once

#include "ofMain.h"
#include "BaseScreen.hpp"
#include "start_screen.hpp"
#include "ofApp.h"

#include "main_screen_01.hpp"



class end_screen : public BaseScreen{
public:
    
    void setup();
    void update();
    void draw();
    
    ofTrueTypeFont title_font;
    
};
