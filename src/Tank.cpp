#include "Tank.h"
#include <raylib.h>
void Tank::draw() {
    DrawTexturePro(texture, {0, 0, (float)(texture.width), (float)texture.height},
                   {position.x, position.y, TANK_WIDTH, TANK_HEIGHT}, {0, 0}, 0, WHITE);
}
void Tank::mention() {
    if(IsKeyDown(KEY_D)) {
        if (fuel > 0) {
           position.x += 0.7;
            fuel -= 0.7;
        }
    }
    if(IsKeyDown(KEY_A)) {
        if (fuel > 0) {
            position.x -= 0.6;
            fuel -= 1;
        }
    }
}
void Tank::quantity_fuel(){
    Color fuel_color = {255, 200, 0, 255};
    DrawLineEx({1600, 800}, {(float)(1600 + fuel), 800}, 15, fuel_color);
    DrawText("Fuel" , 1650, 750, 40, fuel_color);
}
