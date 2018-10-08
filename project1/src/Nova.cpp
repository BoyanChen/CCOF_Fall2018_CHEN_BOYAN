//
//  Nova.cpp
//  project1
//
//  Created by Ronnie Chen on 10/6/18.
//

#include "Nova.hpp"

void Nova::setup(){
    radius = 0;
    angle = ofRandom(0,360);
    vel = ofRandom(0.05,0.08);
    c.r = ofRandom(0,255);
    c.g = ofRandom(0,255);
    c.b = ofRandom(0,255);
    
}

void Nova::update(){
    
    radius += vel;

     x = radius*cos(ofDegToRad(angle));
     y = radius*sin(ofDegToRad(angle));
    if(abs(x) > ofGetWindowWidth()/2){
        radius = 0;
        angle = ofRandom(0,360);
        vel = ofRandom(0.2,0.5);
    }if(abs(y)>ofGetWindowHeight()/2){
        radius = 0;
        angle = ofRandom(0,360);
        vel = ofRandom(0.2,0.5);
    }
}

void Nova::draw(){
    ofSetColor(c);
    ofDrawCircle(radius*cos(ofDegToRad(angle)), radius*sin(ofDegToRad(angle)), 4);
}
