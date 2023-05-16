#include "Tank.h"

void Tank::draw() {
    DrawTexturePro(texture, {0, 0, (float)(texture.width), (float)texture.height},
                   {position.x, position.y, TANK_WIDTH, TANK_HEIGHT}, {0, 0}, 0, WHITE);
}
