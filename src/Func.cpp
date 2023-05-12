#include "Func.h"
void drawAllBlocks(vector<vector<Block>> blocks){
    for (int i = 0; i < layer_blocks ; ++i) {
        for (int j = 0; j < column_blocks; ++j) {
            if(i < layer_blocks - 1) blocks[i][j].view = ground;
            else blocks[i][j].view = grass;
            DrawTextureV(blocks[i][j].view, {j * BLOCK_WIDTH, i * BLOCK_HEIGHT}, WHITE);
        }
    }
}
void filling_blocks(vector<vector<Block>>& blocks){
    Block block = {ground};
    vector<Block> a;
    for (int i = 0; i < column_blocks; ++i) {
        a.push_back(block);
    }
    for (int i = 0; i < layer_blocks; ++i) {
        blocks.push_back(a);
    }
}