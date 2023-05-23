//
// Created by podlesnyims on 19.05.2023.
//

#ifndef RAYLIBTEMPLATE_MUZZLE_H
#define RAYLIBTEMPLATE_MUZZLE_H
#include <raylib.h>
#include "Variable.h"
class Muzzle {
public:
    Vector2 position;
    int angle = 0;
    Texture2D texture;
    void draw();
};


#endif //RAYLIBTEMPLATE_MUZZLE_H
