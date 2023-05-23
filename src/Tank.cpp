#include "Tank.h"
#include "Variable.h"
#include "Func.h"

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
        if (muzzle.angle > -72){
            muzzle.angle -= 1;

        }
    }
    if(IsKeyDown(KEY_S) ) {
        if (muzzle.angle < 72){
            muzzle.angle += 1;

        }
    }
}
void Tank::drawProgressBarFuels(){
    DrawLineEx({1600, 800}, {(float)(1600 + fuel), 800}, 15, {255, 200, 0, 255});
    muzzle.position = {position.x + PIXELS_TO_MUZZLE.x, position.y + PIXELS_TO_MUZZLE.y};
    muzzle.draw();
}

void Tank::shoot() {
    for (int i = 0; i < valueAmmo; ++i) {

    }
}
void Tank::fall_down(vector<vector<Block>> blocks) {
    vector<int> heights(blocks.size());
    for (int i = 0; i < blocks.size(); ++i) {
        vector<int> ls;
        for (int j = 0; j < blocks[i].size(); ++j) {
            if(blocks[i][j].position.x >= position.x && blocks[i][j].position.x <= position.x + TANK_WIDTH) {
                ls.push_back(blocks[i][j].position.y);
            }
        }
        heights[i] = big_min(ls);
    }
    if(big_min(heights) > position.y + TANK_HEIGHT) position.y += 1;
}