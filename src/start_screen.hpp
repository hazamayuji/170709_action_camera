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
    
    string num;
    
    //フォント
    ofTrueTypeFont font;
    ofTrueTypeFont title_font;
    
    bool box_cov[3] = {false, false, false};

    
    int title_x = ofGetWidth()/4;
    int title_y = ofGetHeight()/2 - ofGetHeight()/7.6;
    
    int box_y = ofGetHeight()/2 + 50;
    int box_width = ofGetWidth()/4.2666;
    int box_height = ofGetHeight()/7.6;
    int text_y = box_y + ofGetHeight()/12.6;
    
    int box_x_1 = 50;
    
};
