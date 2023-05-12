//
// Created by vorontcovka on 12.05.2023.
//

#ifndef RAYLIBTEMPLATE_VARIABLE_H
#define RAYLIBTEMPLATE_VARIABLE_H
#include <raylib.h>

const int screenWidth = GetScreenWidth();
const int screenHeight = GetScreenHeight();
const float BLOCK_HEIGHT = 100;
const float BLOCK_WIDTH = 100;
const int FPS = 60;
const int BLOCK_LAYER_IN_HEIGHT = screenHeight / 2 / BLOCK_HEIGHT;
const int BLOCK_LAYER_IN_WIDTH = screenWidth/ BLOCK_WIDTH;
//
//const Texture2D  grass = LoadTexture("grass.png");
//const Texture2D  ground = LoadTexture("ground.png");
#endif //RAYLIBTEMPLATE_VARIABLE_H
