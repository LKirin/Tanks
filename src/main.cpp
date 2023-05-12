#include "Func.h"
#include "Block.h"
#include <raylib.h>
#define RAYGUI_IMPLEMENTATION
#include "extras/raygui.h"
#include "Variable.h"
using namespace std;
int main() {
    Block block_pattern;
    vector<vector<Block>> blocks;
    fillingBlocks(blocks, block_pattern);
    InitWindow(screenWidth, screenHeight, "raylib [core] example");
    SetTargetFPS(FPS);               // Set our game to run at 60 frames-per-second
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        blocks[0][0].position = { 100, 100 };
        blocks[0][0].draw();
        drawAllblocks(blocks);
        EndDrawing();
    }
    CloseWindow();        // Close window and OpenGL context
}