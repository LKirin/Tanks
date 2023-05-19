#ifndef RAYLIBTEMPLATE_TANK_H
#define RAYLIBTEMPLATE_TANK_H
#include <raylib.h>
#include "Ammo.h"
#include <vector>
#include "Variable.h"
struct Tank {
    Texture2D texture;
    Vector2 position;
    int fuel = level_fuel;
    std::vector<Ammo> armemnt;
    void draw();
    void mention();
    void quantity_fuel();
};
#endif //RAYLIBTEMPLATE_TANK_H

