#ifndef RAYLIBTEMPLATE_AMMO_H
#define RAYLIBTEMPLATE_AMMO_H
#include <raylib.h>
#include "Variable.h"
#include <vector>
#include "Block.h"
#include <iostream>
using namespace std;
struct Ammo{
    Texture2D texture;
    float weight;
    Vector2 position;
    int rotation;
    Vector2 rad_rotation; ///угол поворота в радианах

    //void preview();
    void draw();
    void crash(vector<vector<Block>> blocks);
};
#endif //RAYLIBTEMPLATE_AMMO_H
