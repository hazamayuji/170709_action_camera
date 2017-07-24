#include "ofApp.h"

//動的配列でscreeenを追加
vector <BaseScreen *> screens;

using namespace std;

void ofApp::changeScreen(AppScreen screen){

    switch (screen) {
        case AppScreen::StartScreen:
            currentScreen = 0;
            break;
            
        case AppScreen::MainScreen_01:
            currentScreen = 1;
            break;
            
        case AppScreen::EndScreen:
            currentScreen = 2;
            break;
    }
    
}


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    
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
    
    getCurrentScreen() -> update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    getCurrentScreen() -> draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    getCurrentScreen() -> keyPressed();
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    getCurrentScreen() -> keyReleased();
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

    getCurrentScreen() -> mouseMoved();
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    getCurrentScreen() -> mouseDragged();
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

     getCurrentScreen() -> mousePressed(x, y, button);
   
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
     getCurrentScreen() -> mouseReleased();

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

BaseScreen *ofApp::getCurrentScreen() {
    return screens[currentScreen];
}
