//
// Created by vorontcovka on 12.05.2023.
//

#ifndef RAYLIBTEMPLATE_BLOCK_H
#define RAYLIBTEMPLATE_BLOCK_H

#include <raylib.h>
class Block {
public:
    float height = 16;
    float width = 9;
    bool isDrawing = false;
    Texture2D view;
};


#endif //RAYLIBTEMPLATE_BLOCK_H
