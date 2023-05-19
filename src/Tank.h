#ifndef RAYLIBTEMPLATE_TANK_H
#define RAYLIBTEMPLATE_TANK_H
#include <raylib.h>
#include "Ammos.h"
#include <vector>
#include "Variable.h"
struct Tank {
    Texture2D texture;
    Vector2 position;
    int gasoline = level_gasoline;
    std::vector<Ammo> armemnt;
    void draw();
    void mention();
};
#endif //RAYLIBTEMPLATE_TANK_H

