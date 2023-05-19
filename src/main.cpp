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
    Texture2D grass = LoadTexture("grass.png");
    Texture2D ground = LoadTexture("ground.png");
    Texture2D muzzle = LoadTexture("muzzle.png");
    int BLOCK_LAYER_IN_HEIGHT = screenHeight / 2 / BLOCK_HEIGHT;
    int BLOCK_LAYER_IN_WIDTH = screenWidth/ BLOCK_WIDTH;
    vector<vector<Block>> blocks;



    Ammo ammo;
    ammo.position = {100, 100};
    ammo.texture = ground;
    ammo.rotation = 30.f;

    Tank tank;
    tank.texture = tex_tank;
    tank.position = {50, (float)screenHeight / 2 - TANK_HEIGHT + 20};
    fillingBlocks(blocks, BLOCK_LAYER_IN_HEIGHT, BLOCK_LAYER_IN_WIDTH, grass, ground);
    tank.muzzle.texture = muzzle;
    tank.muzzle.position = {100, 100};


    SetTargetFPS(FPS);               
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(SKYBLUE);
        drawAllblocks(blocks, BLOCK_LAYER_IN_WIDTH);
        ammo.draw();
        tank.mention();
        tank.draw();
        tank.drawProgressBarFuels();
        EndDrawing();
    }
    CloseWindow();     
}