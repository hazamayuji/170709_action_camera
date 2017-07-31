//
//  main_screen_01.cpp
//  170709_action_camera
//
//  Created by Áã≠ÈñìÁ•êËá≥ on 2017/07/11.
//
//

#include "main_screen_01.hpp"

#include "/Users/hazamayuji/Desktop/of_v0.9.8_osx_release/apps/myApps/170709_action_camera/ofxFaceTracker/src/ofxFaceTracker.h"



using namespace std;

void main_screen_01::setup(){
    
    ofEnableAlphaBlending();

    //動画読み込み
    test_count[0].load("/Users/hazamayuji/Desktop/of_v0.9.8_osx_release/apps/myApps/170709_action_camera/bin/data/0.mp4");
    test_count[1].load("/Users/hazamayuji/Desktop/of_v0.9.8_osx_release/apps/myApps/170709_action_camera/bin/data/1.MOV");
    test_count[2].load("/Users/hazamayuji/Desktop/of_v0.9.8_osx_release/apps/myApps/170709_action_camera/bin/data/2.MOV");
    test_count[3].load("/Users/hazamayuji/Desktop/of_v0.9.8_osx_release/apps/myApps/170709_action_camera/bin/data/3.MOV");
    test_count[4].load("/Users/hazamayuji/Desktop/of_v0.9.8_osx_release/apps/myApps/170709_action_camera/bin/data/4.MOV");
    test_count[5].load("/Users/hazamayuji/Desktop/of_v0.9.8_osx_release/apps/myApps/170709_action_camera/bin/data/5.MOV");

}

void main_screen_01::update(){
    
}

void main_screen_01::draw(){
    
    ofBackground(0, 0, 0);
    
    ofSetColor(255, 0, 0);
    ofDrawRectangle(box_x_end, box_y_end, box_width, box_height);
    
    ofSetColor(0, 255, 0);
    ofDrawRectangle(box_x_end, ofGetHeight() - 350,  box_width, box_height);
    
    //ビデオの関係上
    ofSetColor(255, 255, 255, 255);
    
    //ビデオ(カウントしてるビデオ)の表示
    if(kintore_count == 1){
        test_count[0].stop();
        test_count[1].play();
        test_count[1].draw(300, 300, 400, -300);
    }else if(kintore_count == 2){
        test_count[1].stop();
        test_count[2].play();
        test_count[2].draw(300, 300, 400, -300);
    }else if(kintore_count == 3){
        test_count[2].stop();
        test_count[3].play();
        test_count[3].draw(300, 300, 400, -300);
    }else if(kintore_count == 4){
        test_count[3].stop();
        test_count[4].play();
        test_count[4].draw(300, 300, 400, -300);
    }else if(kintore_count == 5){
        test_count[4].stop();
        test_count[5].play();
        test_count[5].draw(300, 300, 400, -300);
    }else{
        test_count[5].stop();
        test_count[0].play();
        test_count[0].draw(300, 300, 400, -300);
    }
    

}

void main_screen_01::mousePressed(int x, int y, int button) {
    
    //画面推移
    if(x > box_x_end && x < box_x_end + box_width && y < box_y_end + box_height && y > box_y_end){
        dynamic_cast<ofApp *>(ofGetAppPtr())->changeScreen(AppScreen::EndScreen);
    }

    //カウントが共有できるかっていうボタン
    if(x > box_x_end && x < box_x_end + box_width && y < ofGetHeight() - 350 + box_height && y > ofGetHeight() - 350){
        kintore_count++;
        cout << kintore_count << endl;
    }
    
}
