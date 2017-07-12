//
//  start_screen.cpp
//  170709_action_camera
//
//  Created by 狭間祐至 on 2017/07/09.
//
//

#include "start_screen.hpp"


void start_screen::setup(){
    //フォントを読み込み
    font.load("Arial.ttf", 20);
    
    title_font.load("Arial.ttf", 80);
    
}

//--------------------------------------------------------------

void start_screen::update(){
    
}

//--------------------------------------------------------------

void start_screen::draw(){
    ofBackground(0, 0, 0);
    
    
    ofSetColor(255, 255, 255);
    title_font.drawString("Kintorechan", 250, ofGetHeight()/2 - 100);
    

    //----ボタンの図形を描画----//
    
    //button1
    ofSetColor(255,0,0);
    ofDrawRectangle(50, ofGetHeight()/2 + 50, 240, 100);
    
    //button2
    ofSetColor(0,255,0);
    ofDrawRectangle(390, ofGetHeight()/2 + 50, 240, 100);

    
    //button3
    ofSetColor(0,0,255);
    ofDrawRectangle(730, ofGetHeight()/2 + 50, 240, 100);
    
    //----ボタンの文字を描画----//
    
    //色を白にする
    ofSetColor(255, 255, 255);
    
    //button1
    font.drawString("Level 1", 125, ofGetHeight()/2 + 60 + 50);
    
    //button2
    font.drawString("Level 2", 125 + 340, ofGetHeight()/2 + 60 + 50);
    
    //button3
    font.drawString("Level 3", 125 + 340 + 340, ofGetHeight()/2 + 60 + 50);

    
}

//--------------------------------------------------------------
void start_screen::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void start_screen::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void start_screen::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void start_screen::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void start_screen::keyPressed(int key){
    switch (key) {
            case '4':
            currentScreen = 4;
            break;
    }
    
}
