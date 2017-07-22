#include "ofApp.h"

//動的配列でscreeenを追加
vector <BaseScreen *> screens;

//インスタンス化
start_screen star_sc;
main_screen_01 mai_sc_01;

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
 
    star_sc.currentScreen = 0;
    
    //番号:0
    //start_screen
    BaseScreen *star_sc = new start_screen();
    star_sc -> setup();
    screens.push_back(star_sc);
    
    //番号:1
    //main_screen_01
    BaseScreen *main_sc_01 = new main_screen_01();
    main_sc_01 -> setup();
    screens.push_back(main_sc_01);
    
    //番号:2
    //end_screen
    BaseScreen *end_sc = new end_screen();
    end_sc -> setup();
    screens.push_back(end_sc);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    screens[star_sc.currentScreen] -> update();
    
    //画面推移
    for(int i = 0; i < 4; i ++){
        if(Press_button[i]){
            star_sc.currentScreen = i+1;
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    screens[star_sc.currentScreen] -> draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    screens[star_sc.currentScreen] -> keyPressed();
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    screens[star_sc.currentScreen] -> keyReleased();
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

    screens[star_sc.currentScreen] -> mouseMoved();
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    screens[star_sc.currentScreen] -> mouseDragged();
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

     screens[star_sc.currentScreen] -> mousePressed();
    
    if(ofGetMouseX() > box_x_1 && ofGetMouseX() < box_x_1 + box_width && ofGetMouseY() < box_y + box_height && ofGetMouseY() > box_y){
        Press_button[0] = true;
    }
    
    if(ofGetMouseX() > box_x_end && ofGetMouseX() < box_x_end + box_width && ofGetMouseY() < box_y_end + box_height && ofGetMouseY() > box_y_end){
        Press_button[1] = true;
    }
   
    //カウントが共有できるかっていうボタン
    if(ofGetMouseX() > box_x_end && ofGetMouseX() < box_x_end + box_width && ofGetMouseY() < ofGetHeight() - 350 + box_height && ofGetMouseY() > ofGetHeight() - 350){
        mai_sc_01.kintore_count++;
        cout << mai_sc_01.kintore_count << endl;
    }
   

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
     screens[star_sc.currentScreen] -> mouseReleased();

}


//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
