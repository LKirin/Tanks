#ifndef RAYLIBTEMPLATE_TANK_H
#define RAYLIBTEMPLATE_TANK_H
#include <raylib.h>
#include "Ammos.h"
#include <vector>
struct Tank {
    Texture2D texture;
    Vector2 position;
    int gasoline;
    std::vector<Ammo> armemnt;
};
#endif //RAYLIBTEMPLATE_TANK_H

