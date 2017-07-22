//
//  main_screen_01.cpp
//  170709_action_camera
//
//  Created by Áã≠ÈñìÁ•êËá≥ on 2017/07/11.
//
//

#include "main_screen_01.hpp"
using namespace std;

void main_screen_01::setup(){
    
    ofEnableAlphaBlending();
    
    
    test_count[0].load("/Users/hazamayuji/Desktop/of_v0.9.8_osx_release/apps/myApps/170709_action_camera/bin/data/0.MOV");
    test_count[1].load("/Users/hazamayuji/Desktop/of_v0.9.8_osx_release/apps/myApps/170709_action_camera/bin/data/1.MOV");
    test_count[2].load("/Users/hazamayuji/Desktop/of_v0.9.8_osx_release/apps/myApps/170709_action_camera/bin/data/2.MOV");
    test_count[3].load("/Users/hazamayuji/Desktop/of_v0.9.8_osx_release/apps/myApps/170709_action_camera/bin/data/3.MOV");
    test_count[4].load("/Users/hazamayuji/Desktop/of_v0.9.8_osx_release/apps/myApps/170709_action_camera/bin/data/4.MOV");
    test_count[5].load("/Users/hazamayuji/Desktop/of_v0.9.8_osx_release/apps/myApps/170709_action_camera/bin/data/5.MOV");
    
    
}

void main_screen_01::update(){
    
    for(int i = 0; i < 6; i++){
        test_count[i].update();
    }
    
}

void main_screen_01::draw(){
    
    ofBackground(0, 0, 0);

    int box_x_end = 50 + (ofGetWidth()/3);
    int box_y_end = ofGetHeight() - 150;
    
    int box_width = ofGetWidth()/4.2666;
    int box_height = ofGetHeight()/7.6;
    
    ofSetColor(255, 0, 0);
    ofDrawRectangle(box_x_end, box_y_end, box_width, box_height);
    
    ofSetColor(0, 255, 0);
    ofDrawRectangle(box_x_end, ofGetHeight() - 350,  box_width, box_height);
    
    //ビデオの関係上
    ofSetColor(255, 255, 255, 255);
    
    //for文にしてさらに簡素化する(?)
    switch (kintore_count) {
        case 0 :
            //cout << "hi" << endl;
            test_count[0].play();
            test_count[0].draw(300, 300, 400, -300);
            break;
        case 1:
            //cout << "hi2" << endl;
            test_count[1].play();
            test_count[1].draw(300, 300, 400, -300);
            break;
        case 2:
            test_count[2].play();
            test_count[2].draw(300, 300, 400, -300);
            break;
    }

    
}
