//
//  end_screen.cpp
//  170709_action_camera
//
//  Created by 狭間祐至 on 2017/07/09.
//
//

#include "end_screen.hpp"


void end_screen::setup(){
    
    ofBackground(0, 0, 0);
    title_font.load("Arial.ttf", 80);
    
}

void end_screen::update(){
    
}

void end_screen::draw(){
    
    int title_x = ofGetWidth()/4;
    int title_y = ofGetHeight()/2 - ofGetHeight()/7.6;
    
    //タイトルの描画
    ofSetColor(255, 255, 255);
    title_font.drawString("END", title_x, title_y);
    

    
}
