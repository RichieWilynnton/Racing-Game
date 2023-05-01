#ifndef CAR_H
#define CAR_H

#include "State.h"
#include "Road.h"
#include <ncurses.h>

class Car
{
public:
    float speed = 0; // Current player speed

    void init();
    void update();
    void draw();

    State *state;
    Road *road;

private:
    int dir = 0;
    int x, y = 36;
    float curvature = 0;

    Sprite *straight;
    Sprite *left;
    Sprite *right;
};

#endif