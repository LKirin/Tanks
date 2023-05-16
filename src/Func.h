//
// Created by vorontcovka on 12.05.2023.
//

#ifndef RAYLIBTEMPLATE_FUNC_H
#define RAYLIBTEMPLATE_FUNC_H

#include "Block.h"
#include "Variable.h"
#include <vector>
using namespace std;
void fillingBlocks(vector<vector<Block>> &blocks, int BLOCK_LAYER_IN_HEIGHT, int BLOCK_LAYER_IN_WIDTH, Texture2D grass, Texture2D ground);
void drawAllblocks(vector<vector<Block>> &blocks, int BLOCK_LAYER_IN_WIDTH);
#endif //RAYLIBTEMPLATE_FUNC_H
