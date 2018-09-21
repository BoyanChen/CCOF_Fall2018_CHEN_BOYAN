//
//  Particle.hpp
//  HW_01
//
//  Created by Ronnie Chen on 9/19/18.
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include <ofMain.h>

#endif /* Particle_hpp */

class Particle{
public:
    void setup();
    void setupAtCertainPos(ofPoint _position);
    void draw();
    void update();
    Particle();
private:
    ofPoint p;
    float speedX;
    float speedY;
    ofVec2f speed;
    float r;
    float current;
    float powerRadius;
    float movementLimMaxX;
    float movementLimMinX;
    float movementLimMaxY;
    float movementLimMinY;
};
