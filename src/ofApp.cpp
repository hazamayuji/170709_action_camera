#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    
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
    //main_screen_02
    BaseScreen *main_sc_02 = new main_screen_02();
    main_sc_02 -> setup();
    screens.push_back(main_sc_02);
    
    //番号:3
    //main_screen_03
    BaseScreen *main_sc_03 = new main_screen_03();
    main_sc_03 -> setup();
    screens.push_back(main_sc_03);
    
    //番号:4
    //end_screen
    BaseScreen *end_sc = new end_screen();
    end_sc -> setup();
    screens.push_back(end_sc);
    
    //初期値を0に設定(start_screenが最初に来るようにした)
    currentScreen = 0;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    //screen
    screens[currentScreen] -> update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    screens[currentScreen] -> draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    screens[currentScreen] -> keyPressed();
    
    switch (key) {
            
        case '1':
            currentScreen = 0;
            break;
        case '2':
            currentScreen = 1;
            break;
        case '3':
            currentScreen = 2;
            break;
        case '4':
            currentScreen = 3;
            break;
        case '5':
            currentScreen = 4;
            break;
            
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    screens[currentScreen] -> keyReleased();
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

    screens[currentScreen] -> mouseMoved();

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    screens[currentScreen] -> mouseDragged();
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

     screens[currentScreen] -> mousePressed();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
     screens[currentScreen] -> mouseReleased();

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
