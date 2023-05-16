#include <iostream>
#include "Func.h"

void fillingBlocks(vector<vector<Block>> &blocks, int BLOCK_LAYER_IN_HEIGHT, int BLOCK_LAYER_IN_WIDTH, Texture2D grass, Texture2D ground ) {
    for (int i = 0; i < BLOCK_LAYER_IN_HEIGHT; i++) {

        vector<Block> vec_blocks(BLOCK_LAYER_IN_WIDTH);
        for (int j = 0; j < BLOCK_LAYER_IN_WIDTH; j++) {

            if (i < BLOCK_LAYER_IN_HEIGHT - 1) {
                vec_blocks[j].texture = ground ;

            }
            else {
                vec_blocks[j].texture = grass ;
            }
            vec_blocks[j].position.x = j * BLOCK_WIDTH;
            vec_blocks[j].position.y = screenHeight - i * BLOCK_HEIGHT;
        }
        blocks.push_back(vec_blocks);
    }
}


void drawAllblocks(vector<vector<Block>> &blocks, int BLOCK_LAYER_IN_WIDTH, Texture2D ground) {
    for (int i = 0; i < blocks.size(); i++) {
        for (int j = 0; j < BLOCK_LAYER_IN_WIDTH; j++) {
            blocks[i][j].draw(ground);
        }
    }
}