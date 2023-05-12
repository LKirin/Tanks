#include "Func.h"

void fillingBlocks(vector<vector<Block>>& blocks, Block block_pattern){
	for (int i = 0; i < BLOCK_LAYER_IN_HEIGHT; i++)
	{
		vector<Block> vec_blocks(BLOCK_LAYER_IN_WIDTH);
		for (int j = 0; j < BLOCK_LAYER_IN_WIDTH; j++)
		{
			blocks[i][j].position.x = j * BLOCK_WIDTH;
			blocks[i][j].position.y = i * BLOCK_HEIGHT;
		}
		blocks.push_back(vec_blocks);
	}
    
    
}
void drawAllblocks(vector<vector<Block>>& blocks) {
	for (int i = 0; i < blocks.size(); i++)
	{
		for (int j = 0; j < BLOCK_LAYER_IN_WIDTH; j++) {
			
			blocks[i][j].draw();
		}
	}
}