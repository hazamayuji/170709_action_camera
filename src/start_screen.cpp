//
//  start_screen.cpp
//  170709_action_camera
//


#include "start_screen.hpp"
using namespace std;

void start_screen::setup(){
    ofBackground(0, 0, 0);
    ofEnableAlphaBlending();
    
    //フォント読み込み
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
        int text_x = ofGetWidth()/8.19 + (ofGetWidth()/3) * i;
        int box_x = 50 + (ofGetWidth()/3) * i;
        
        
        //lev表示(変数と文字列の変換)
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
        ofDrawRectangle(box_x, box_y, box_width, box_height);

        //lev
        ofSetColor(255, 255, 255);
        font.drawString("Level " + num, text_x, text_y);

    }
    
    
    
    for(int i = 0; i < 4; i++){
        
        int box_x_sub = 50 + (ofGetWidth()/3) * i;
        
        if(ofGetMouseX() > box_x_sub && ofGetMouseX() < box_x_sub + box_width && ofGetMouseY() < box_y + box_height && ofGetMouseY() > box_y){
            box_cov[i] = true;
        }else{
            box_cov[i] = false;
        }
        
        if(box_cov[i]){
            ofSetColor(255, 255, 255, 127);
            ofDrawRectangle(box_x_sub, box_y, box_width, box_height);
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
