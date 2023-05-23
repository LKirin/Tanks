#ifndef RAYLIBTEMPLATE_AMMO_H
#define RAYLIBTEMPLATE_AMMO_H
#include <raylib.h>
struct Ammo{
    Texture2D texture;
    float weight;
    Vector2 position;
    int rotation;
    Vector2 rad_rotation; ///угол поворота в радианах

    //void preview();
    void draw();
};
#endif //RAYLIBTEMPLATE_AMMO_H
