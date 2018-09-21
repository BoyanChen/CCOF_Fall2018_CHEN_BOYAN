#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(960, 500);
    ofBackground(0);
    // drop a bunch of balls
//    for(int i = 0; i < particleNum; i++){
//        particleGroup[i].setup();
//    }

}

//--------------------------------------------------------------
void ofApp::update(){
//update a bunch of balls
//    for(int i = 0; i < particleNum; i++){
//        particleGroup[i].update();
//    }
    // upda;te a bun;ch of balls according to the vector array
    if(groupsOfBalls.size()!=0){
        for(int i = 0; i < groupsOfBalls.size();i++){
            groupsOfBalls[i].update();
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
//draw a bunch of balls
//    for(int i = 0; i < particleNum; i++){
//        particleGroup[i].draw();
//    }
// update a bunch of balls according to the vector array
    if(groupsOfBalls.size()!=0){
        for(int i = 0; i < groupsOfBalls.size();i++){
            groupsOfBalls[i].draw();
        }
    }
//    test.draw();
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
    ofPoint mousePos = ofPoint(mouseX,mouseY,0);
    Particle tempParticle;
    tempParticle.setupAtCertainPos(mousePos);
    groupsOfBalls.push_back(tempParticle);
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
