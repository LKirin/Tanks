#include "Func.h"
#include "Block.h"
#include <raylib.h>
#include <iostream>
#define RAYGUI_IMPLEMENTATION
#include "extras/raygui.h"
#include "Variable.h"
using namespace std;
int main() {


    InitWindow(screenWidth, screenHeight, "raylib [core] example");
    Texture2D grass = LoadTexture("grass.png");
    Texture2D ground = LoadTexture("ground.png");
    int BLOCK_LAYER_IN_HEIGHT = screenHeight / 2 / BLOCK_HEIGHT;
    int BLOCK_LAYER_IN_WIDTH = screenWidth/ BLOCK_WIDTH;
    vector<vector<Block>> blocks;
    fillingBlocks(blocks, BLOCK_LAYER_IN_HEIGHT, BLOCK_LAYER_IN_WIDTH, grass, ground);
    SetTargetFPS(FPS);               
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(SKYBLUE);

        drawAllblocks(blocks, BLOCK_LAYER_IN_WIDTH);

        EndDrawing();
    }
    CloseWindow();     
}