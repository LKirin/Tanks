#include "Tank.h"

void Tank::draw() {
    DrawTexturePro(texture, {0, 0, (float)(texture.width), (float)texture.height},
                   {position.x, position.y, TANK_WIDTH, TANK_HEIGHT}, {0, 0}, 0, WHITE);
}
void Tank::mention() {
    if(IsKeyDown(KEY_D)) {
        if (gasoline > 0) {
           position.x += 0.6;
           gasoline -= 1;
        }
    }
    if(IsKeyDown(KEY_A)) {
        if (gasoline > 0) {
            position.x -= 0.6;
            gasoline -= 1;
        }
    }
}
