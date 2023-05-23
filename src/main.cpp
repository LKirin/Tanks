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
    Texture2D tex_tank = LoadTexture("TankGray.png");
    Texture2D tex_grass = LoadTexture("grass.png");
    Texture2D tex_ground = LoadTexture("ground.png");
    Texture2D tex_muzzle = LoadTexture("muzzle.png");
    Texture2D tex_ammo = LoadTexture("ammo.png");
    int BLOCK_LAYER_IN_HEIGHT = screenHeight / 2 / BLOCK_HEIGHT;
    int BLOCK_LAYER_IN_WIDTH = screenWidth/ BLOCK_WIDTH;
    vector<vector<Block>> blocks;

    Tank tank;
    tank.texture = tex_tank;
    tank.position = {50, (float)screenHeight / 2 - TANK_HEIGHT + 20};
    fillingBlocks(blocks, BLOCK_LAYER_IN_HEIGHT, BLOCK_LAYER_IN_WIDTH, tex_grass, tex_ground);
    tank.muzzle.texture = tex_muzzle;
    tank.muzzle.position = {100, 100};
    for (int i = 1; i < 4; ++i) {
        blocks[BLOCK_LAYER_IN_HEIGHT-i].erase(blocks[BLOCK_LAYER_IN_HEIGHT-i].begin(), blocks[BLOCK_LAYER_IN_HEIGHT-i].begin()+20);
    }
    SetTargetFPS(FPS);               
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(SKYBLUE);
        drawAllblocks(blocks, BLOCK_LAYER_IN_WIDTH);

        tank.mention();
        tank.draw();
        tank.drawProgressBarFuels();
        tank.fall_down(blocks);
        EndDrawing();
    }
    CloseWindow();     
}