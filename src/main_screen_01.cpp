//
//  main_screen_01.cpp
//  170709_action_camera
//
//  Created by 狭間祐至 on 2017/07/11.
//
//

#include "main_screen_01.hpp"

void main_screen_01::setup(){
    
    
}

void main_screen_01::update(){
    
}

void main_screen_01::draw(){
    ofBackground(0, 0, 0);
    
    ofSetColor(255, 0, 0);
    
    int box_x_end = 50 + (ofGetWidth()/3) * 1;
    int box_y_end = ofGetHeight() - 150;
    
    int box_width = ofGetWidth()/4.2666;
    int box_height = ofGetHeight()/7.6;
    
    ofDrawRectangle(box_x_end, box_y_end, box_width, box_height);
    
    
}
