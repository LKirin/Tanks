#include "Ammo.h"

void Ammo::draw() {
    DrawTexturePro(texture,
                   {0, 0, (float)texture.width, (float)texture.height},
                   {position.x, position.y, (float)texture.width, (float)texture.height},
                   {0, 0}, rotation, WHITE);
}
