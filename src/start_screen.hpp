//
//  start_screen.hpp
//  170709_action_camera
//
//  Created by Áã≠ÈñìÁ•êËá≥ on 2017/07/09.
//
//

#pragma once

#include "ofMain.h"
#include "ofApp.h"
#include "BaseScreen.hpp"

class start_screen : public BaseScreen{

public:
    
    void setup();
    void update();
    void draw();
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void keyPressed(int key);
    void keyReleased(int key);
    
    //フォント
    ofTrueTypeFont font;
    ofTrueTypeFont title_font;
    
    //int -> string
    string num;
    
    int currentScreen;
    
    bool box_cov[3] = {false, false, false};
    bool Press_button = false;
    
    
    
};
