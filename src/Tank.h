#ifndef RAYLIBTEMPLATE_TANK_H
#define RAYLIBTEMPLATE_TANK_H
#include <raylib.h>
#include "Ammo.h"
#include <vector>
#include "Variable.h"
#include "Muzzle.h"
#include <iostream>
struct Tank {
    Muzzle muzzle;
    Texture2D texture;
    Vector2 position;
    int fuel = VALUE_FUEL;
    std::vector<Ammo> armemnt;
    void draw();
    void mention();
    void drawProgressBarFuels();
};
#endif //RAYLIBTEMPLATE_TANK_H

