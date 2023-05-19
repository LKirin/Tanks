//
// Created by vorontcovka on 12.05.2023.
//

#ifndef RAYLIBTEMPLATE_VARIABLE_H
#define RAYLIBTEMPLATE_VARIABLE_H
#include <raylib.h>
const float BLOCK_HEIGHT = 18;
const float BLOCK_WIDTH = 32;
const int FPS = 60;
const int screenWidth = 1920;
const int screenHeight = 1080;
const float KProportionality = 1.0f;
const float TANK_SPEED = 0.7f * KProportionality;
const float  REDUCED_FUEL = 0.7f ;
const int TANK_WIDTH = 164*KProportionality;
const int TANK_HEIGHT = 76*KProportionality;
const float VALUE_FUEL = 200.f;
const Vector2 PIXELS_TO_MUZZLE = {110*KProportionality, 13*KProportionality};
const float MUZZLE_WIDTH = 60*KProportionality;
const float MUZZLE_HEIGHT = 7*KProportionality;
#endif //RAYLIBTEMPLATE_VARIABLE_H
