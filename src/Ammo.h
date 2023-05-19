#ifndef RAYLIBTEMPLATE_AMMO_H
#define RAYLIBTEMPLATE_AMMO_H
#include <raylib.h>
struct Ammo{
    Texture2D texture;
    float weight;
    Vector2 position;
    float rotation;
    //void preview();
    void draw();
};
#endif //RAYLIBTEMPLATE_AMMO_H
