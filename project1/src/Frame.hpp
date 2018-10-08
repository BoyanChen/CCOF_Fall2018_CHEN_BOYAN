//
//  Frame.hpp
//  project1
//
//  Created by Ronnie Chen on 10/6/18.
//

#ifndef Frame_hpp
#define Frame_hpp

#include <stdio.h>
#include "ofMain.h"

class Frame{
public:
    ofPoint pos;
    float angle;
    float radius;
    
    void setup();
    void update();
    void draw();
};
#endif /* Frame_hpp */
