#include "Func.h"
#include "Block.h"
#include <raylib.h>
#include <iostream>
#define RAYGUI_IMPLEMENTATION
#include "extras/raygui.h"
#include "Variable.h"
#include "Tank.h"
using namespace std;
int main() {


    InitWindow(screenWidth, screenHeight, "raylib [core] example");
    Texture2D tex_tank = LoadTexture("player 2.png");
    Texture2D grass = LoadTexture("grass.png");
    Texture2D ground = LoadTexture("ground.png");
    int BLOCK_LAYER_IN_HEIGHT = screenHeight / 2 / BLOCK_HEIGHT;
    int BLOCK_LAYER_IN_WIDTH = screenWidth/ BLOCK_WIDTH;
    vector<vector<Block>> blocks;
    Tank tank;
    tank.texture = tex_tank;
    tank.position = {50, };
    fillingBlocks(blocks, BLOCK_LAYER_IN_HEIGHT, BLOCK_LAYER_IN_WIDTH, grass, ground);
    SetTargetFPS(FPS);               
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(SKYBLUE);
        tank.mention();
        tank.draw();
        drawAllblocks(blocks, BLOCK_LAYER_IN_WIDTH);

        EndDrawing();
    }
    CloseWindow();     
}