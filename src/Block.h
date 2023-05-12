//
// Created by vorontcovka on 12.05.2023.
//

#ifndef RAYLIBTEMPLATE_BLOCK_H
#define RAYLIBTEMPLATE_BLOCK_H
#include "Variable.h"
#include <raylib.h>
class Block {
public:
    Texture2D texture;
    Vector2 position = {0, 0};
    Color color = BLACK;
    bool isDrawing = true;
    void draw();
};


#endif //RAYLIBTEMPLATE_BLOCK_H
