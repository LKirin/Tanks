//
// Created by vorontcovka on 12.05.2023.
//

#include "Block.h"

void Block::draw()
{
	DrawRectangle(position.x, position.y, BLOCK_WIDTH, BLOCK_HEIGHT, color);


}
