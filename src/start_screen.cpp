//
//  start_screen.cpp
//  170709_action_camera
//
//  Created by Áã≠ÈñìÁ•êËá≥ on 2017/07/09.
//
//

#include "start_screen.hpp"
using namespace std;

void start_screen::setup(){
    ofBackground(0, 0, 0);
    ofEnableAlphaBlending();
    
    //„Éï„Ç©„É≥„Éà„ÇíË™≠„ÅøËæº„Åø
    font.load("Arial.ttf", 20);
    title_font.load("Arial.ttf", 80);
    
  
    
}

//--------------------------------------------------------------

void start_screen::update(){
    
}

//--------------------------------------------------------------

void start_screen::draw(){
    int title_x = ofGetWidth()/4;
    int title_y = ofGetHeight()/2 - ofGetHeight()/7.6;
    

    int box_y = ofGetHeight()/2 + 50;
    int box_width = ofGetWidth()/4.2666;
    int box_height = ofGetHeight()/7.6;
    int text_y = box_y + ofGetHeight()/12.6;
    
    
    
    //タイトル
    ofSetColor(255, 255, 255);
    title_font.drawString("Kintorechan", title_x, title_y);
    

    //----box----//
    
    for(int i = 0; i < 4; i++){
        
        //
        int box_x[3] ={50 ,50 + (ofGetWidth()/3), 50 + (ofGetWidth()/3)*2};
        int text_x = ofGetWidth()/8.19 + (ofGetWidth()/3) * i;
        
        
        //levの文字
        if(i == 0){
            ofSetColor(255,0,0);
            num = "1";
        }else if(i == 1){
            ofSetColor(0,255,0);
            num = "2";
        }else if(i == 2){
            ofSetColor(0,0,255);
            num = "3";
        }
        
        //box
        ofDrawRectangle(box_x[i], box_y, box_width, box_height);

        //lev
        ofSetColor(255, 255, 255);
        font.drawString("Level " + num, text_x, text_y);

    }
    
    
    
    
    
    int box_x_sub[3] = {0,0,0};
    //int box_x_1 = 50 + (ofGetWidth()/3) * 0;
    for(int i = 0; i < 4; i++){
        box_x_sub[i] = 50 + (ofGetWidth()/3) * i;
        if(ofGetMouseX() > box_x_sub[i] && ofGetMouseX() < box_x_sub[i] + box_width && ofGetMouseY() < box_y + box_height && ofGetMouseY() > box_y){
            box_cov[i] = true;
        }else{
            box_cov[i] = false;
        }
        
        if(box_cov[i]){
            ofSetColor(255, 255, 255, 127);
            ofDrawRectangle(box_x_sub[i], box_y, box_width, box_height);
        }

    }
    


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
    
    
}
