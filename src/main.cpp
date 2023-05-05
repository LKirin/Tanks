#include <string>

#include <raylib.h>
#define RAYGUI_IMPLEMENTATION
#include "extras/raygui.h"

int main() {
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example");

    Vector2 ballPosition = {100.0f, 100.0f};

    double radius = 40;
    double ballSpeed = 5;
    std::string text = "";
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //---------------------------------------------------------------------------------------

    bool isBallDirectionRight = true;

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        Color ballColor = DARKBLUE;
//		ballPosition = GetMousePosition();

        if (IsKeyDown(KEY_UP)) ballPosition.y -= 10;
        else if (IsKeyDown(KEY_LEFT)) ballPosition.x -= 10;
        else if (IsKeyDown(KEY_RIGHT)) ballPosition.x += 10;
        else if (IsKeyDown(KEY_DOWN)) ballPosition.y += 10;
        //----------------------------------------------------------------------------------

        radius -= GetMouseWheelMove();

        int lastPressed = GetCharPressed();

        if (lastPressed != 0) {
            text += lastPressed;
        }

        if (ballPosition.x >= 800) {
            ballPosition.x -= ballSpeed;
            isBallDirectionRight = false;
        } else if (ballPosition.x <= 0) {
            ballPosition.x += ballSpeed;
            isBallDirectionRight = true;
        } else if (isBallDirectionRight) {
            ballPosition.x += ballSpeed;
        } else {
            ballPosition.x -= ballSpeed;
        }

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawCircleV(ballPosition, radius, ballColor);
        DrawText("move ball with mouse and click mouse button to change color", 10, 10, 20, DARKGRAY);
        DrawText(text.c_str(), 10, 40, 30, DARKGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}