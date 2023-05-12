#include "Block.h"
#include "Variable.h"
#include <vector>
using namespace std;
void drawAllBlocks(vector<vector<Block>> blocks){
    int layer_blocks = screenHeight / 3 / BLOCK_HEIGHT;
    int column_blocks = screenWidth/ BLOCK_WIDTH;
    for (int i = 0; i < layer_blocks ; ++i) {
        for (int j = 0; j < column_blocks; ++j) {
            if(i < layer_blocks - 1) blocks[i][j].view = ground;
            else blocks[i][j].view = grass;
            DrawTextureV(blocks[i][j].view, {j * BLOCK_WIDTH, i * BLOCK_HEIGHT}, WHITE);
        }
    }
}