//
// Created by vorontcovka on 12.05.2023.
//

#ifndef RAYLIBTEMPLATE_VARIABLE_H
#define RAYLIBTEMPLATE_VARIABLE_H
const int screenWidth = GetScreenWidth();
const int screenHeight = GetScreenHeight();
const float BLOCK_HEIGHT = 9;
const float BLOCK_WIDTH = 16;
const int FPS = 60;
const int layer_blocks = screenHeight / 3 / BLOCK_HEIGHT;
const int column_blocks = screenWidth/ BLOCK_WIDTH;

const Texture2D  grass = LoadTexture("grass.png");
const Texture2D  ground = LoadTexture("ground.png");
#endif //RAYLIBTEMPLATE_VARIABLE_H
