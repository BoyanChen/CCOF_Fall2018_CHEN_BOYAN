#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    gui.setup();
//    gui.add(num.setup("num", 100, 100, 500));
    ofSetWindowShape(800, 500);
    ofSetCircleResolution(50);
    ofEnableSmoothing();
    

    
//    ofSetBackgroundAuto(false);
    ofSetBackgroundAuto(false);
    ofBackground(255);
    ofEnableAlphaBlending();
    num = 500;
    size = 0;
    
    origin.set(ofGetWindowWidth()/2,ofGetWindowHeight()/2);


    

}

//--------------------------------------------------------------
void ofApp::update(){
//    if(size < num){
//    size++;
//    }

//    cout<<size<<endl;
    
    for (int i = 1; i <= num; i++){
        Nova element;
        element.setup();
        particles.push_back(element);
        
    }
    
    
    for (int i = 0; i < num; i++) {
        particles[i].update();
        
//        if(abs(particles[i].x) > ofGetWindowWidth()/2){
////            cout<<"it in!"<<endl;
//            particles.erase(particles.begin()+i);
//        }
//        if(abs(particles[i].y) > ofGetWindowHeight()/2){
//            particles.erase(particles.begin()+i);
//        }

    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
//    gui.draw();
    ofSetColor(255, 255, 255, 5);
    ofDrawRectangle(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
    ofPushMatrix();
    ofTranslate(origin);
    for (int i = 0; i < num; i++) {
        particles[i].draw();
    }
    ofPopMatrix();
 
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
