//
//  start_screen.hpp
//  170709_action_camera
//
//  Created by 狭間祐至 on 2017/07/09.
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
    
    //int -> stringへの変換がどうしてもうまくいかなかったため強硬手段
    string num;
    
    //画面切り替えで使用
    int currentScreen;
    
    bool box_cov_1 = false;
    bool box_cov_2 = false;
    bool box_cov_3 = false;
    
    bool Press_button = false;
    
};
