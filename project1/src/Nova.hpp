//
//  Nova.hpp
//  project1
//
//  Created by Ronnie Chen on 10/6/18.
//

#ifndef Nova_hpp
#define Nova_hpp

#include <stdio.h>
#include "ofMain.h"

class Nova{
public:
    ofPoint origin;
    float radius;
    float angle;
    float vel;
    float angleVel;
    float roundRadius;
    ofColor c;

    void setup();
    void draw();
    void update();
    float x;
    float y;
    ofPoint pivot;
};
#endif /* Nova_hpp */
