//
//  Particle.cpp
//  HW_01
//
//  Created by Ronnie Chen on 9/19/18.
//

#include "Particle.hpp"

Particle:: Particle(){
    
}

void Particle::setup(){
    
    p.x = ofRandom(0,ofGetWindowWidth());
    p.y = ofRandom(0,ofGetWindowHeight());
    r = 80;
    current = 0.01;
    speedX = ofRandom(5,10);
    speedY = ofRandom(5,10);
    speed.set(speedX,speedY);

}

void Particle::setupAtCertainPos(ofPoint _position){
    p = _position;
    r = 80;
    current = 0.01;
    
    speedX = ofRandom(5,10);
    speedY = ofRandom(5,10);
    speed.set(speedX,speedY);
    
    movementLimMaxX = ofRandom(330,630);
    movementLimMinX = ofRandom(330,630);
    if(movementLimMinX > movementLimMaxX){
        float swap = movementLimMinX;
        movementLimMinX = movementLimMaxX;
        movementLimMaxX = swap;
    }
    
    movementLimMaxY = ofRandom(80,880);
    movementLimMinY = ofRandom(80,420);
    if(movementLimMinY > movementLimMaxY){
        float swap = movementLimMinX;
        movementLimMinY = movementLimMaxY;
        movementLimMaxY = swap;
    }

    
}

void Particle::update(){
    if(current < 1){
    current += 0.01;
    powerRadius = cos(current)*sin(current);
    }else{
        current = 0.01;
    }
    
//Bouncing and moving with certain speed
    if(p.x >= movementLimMaxX || p.x < movementLimMinX){
        speed.x *= -1;
    }
    if(p.y >= movementLimMaxY || p.y < movementLimMinY){
        speed.y *= -1;
    }
    p += speed;
}

void Particle::draw(){
ofSetColor(powerRadius*300,powerRadius*300,255);
    ofDrawCircle(p.x,p.y,powerRadius*r);
}
