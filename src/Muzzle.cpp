//
// Created by podlesnyims on 19.05.2023.
//

#include "Muzzle.h"

void Muzzle::draw() {

    DrawTexturePro(texture, {0, 0, (float)(texture.width), (float)texture.height},
                   {position.x, position.y, MUZZLE_WIDTH, MUZZLE_HEIGHT}, {0, MUZZLE_HEIGHT/2 + 1}, angle, WHITE);
}
