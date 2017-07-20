#include "ofApp.h"

//複数のシーンを格納する動的配列
vector <BaseScreen *> screens;
//インスタンス化
start_screen star_sc;
main_screen_01 mai_sc_01;

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    //初期値を0に設定(start_screenが最初に来るようにした)
    star_sc.currentScreen = 0;

    
    //シーンを新規に生成し、配列に追加
    
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
    //screen
    screens[star_sc.currentScreen] -> update();
    
    if(Press_button_1){
        star_sc.currentScreen = 1;
    }
    
    
    if(Press_button_end){
        star_sc.currentScreen = 2;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    screens[star_sc.currentScreen] -> draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    screens[star_sc.currentScreen] -> keyPressed();
    
    switch (key) {
            
        case '1':
            star_sc.currentScreen = 0;
            break;
        case '2':
            star_sc.currentScreen = 1;
            break;
        case '3':
            star_sc.currentScreen = 2;
            break;
            
    }
    
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
    
    int box_x_1 = 50 + (ofGetWidth()/3) * 0;
    if(ofGetMouseX() > box_x_1 && ofGetMouseX() < box_x_1 + box_width && ofGetMouseY() < box_y + box_height && ofGetMouseY() > box_y){
        Press_button_1 = true;
    }
    
    
    
    int box_x_end = 50 + (ofGetWidth()/3);
    int box_y_end = ofGetHeight() - 150;
    
    if(ofGetMouseX() > box_x_end && ofGetMouseX() < box_x_end + box_width && ofGetMouseY() < box_y_end + box_height && ofGetMouseY() > box_y_end){
        Press_button_end = true;
        cout << "hello" << endl;
    }
   
    if(ofGetMouseX() > box_x_end && ofGetMouseX() < box_x_end + box_width && ofGetMouseY() < ofGetHeight() - 350 + box_height && ofGetMouseY() > ofGetHeight() - 350){
        //mai_sc_01.kintore_count++;
        cout << "hIII" << endl;
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
