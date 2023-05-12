#include "Func.cpp"
#include "Block.h"
#include <raylib.h>
#define RAYGUI_IMPLEMENTATION
#include "extras/raygui.h"
#include "Variable.h"

int main() {
    // Initialization
    //--------------------------------------------------------------------------------------

    vector<vector<Block>> blocks;
    InitWindow(screenWidth, screenHeight, "raylib [core] example");
    SetTargetFPS(FPS);               // Set our game to run at 60 frames-per-second
    //---------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
        ClearBackground(RAYWHITE);
        drawAllBlocks(blocks);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
}