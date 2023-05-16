#include "Block.h"

void Block::draw(Texture2D ground)
{
    DrawTexturePro(texture, {0, 0, (float)(texture.width), (float)texture.height},
                   {position.x, position.y, BLOCK_WIDTH, BLOCK_HEIGHT}, {0, 0}, 0, WHITE);
    //DrawTextureV(ground, {500, 400}, WHITE);
}
