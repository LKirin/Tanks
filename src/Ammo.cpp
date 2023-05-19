#include "Ammo.h"

void Ammo::draw() {
    DrawTexturePro(texture,
                   {0, 0, (float)texture.width, (float)texture.height},
                   {position.x, position.y, 40, 20},
                   {0, 0}, rotation, WHITE);
}
void Ammo::crash(vector<vector<Block>> blocks) {
    int location_x = position.x / BLOCK_WIDTH;
    if(position.y <= blocks[location_x].size() * BLOCK_HEIGHT){
        for (int i = 0; i < 3; ++i) {
            blocks[location_x - i + 1].erase(blocks[location_x - i + 1].end() - 1);
        }
    }
}
