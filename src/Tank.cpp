#include "Tank.h"
void Tank::draw() {
    DrawTexturePro(texture, {0, 0, (float)(texture.width), (float)texture.height},
                   {position.x, position.y, (float)TANK_WIDTH, (float)TANK_HEIGHT}, {0, 0}, 0, WHITE);
}
void Tank::mention() {
    if(IsKeyDown(KEY_D)) {
        if (fuel > 0) {
           position.x += TANK_SPEED;
            fuel -= REDUCED_FUEL;
        }
    }
    if(IsKeyDown(KEY_A)) {
        if (fuel > 0) {
            position.x -= TANK_SPEED;
            fuel -= REDUCED_FUEL;
        }
    }

    if(IsKeyDown(KEY_W)) {
        if ( muzzle.angle >= 270 ) muzzle.angle += 1;
        else{
            muzzle.angle -= 1;
        }
    }
    if(IsKeyDown(KEY_S) ) {
        if (muzzle.angle <= 100) muzzle.angle -= 1;
        else muzzle.angle += 1;
    }
    std::cout << muzzle.angle << std::endl;
}
void Tank::drawProgressBarFuels(){
    DrawLineEx({1600, 800}, {(float)(1600 + fuel), 800}, 15, YELLOW);
    muzzle.position = {position.x + PIXELS_TO_MUZZLE.x, position.y + PIXELS_TO_MUZZLE.y};
    muzzle.draw();
}
