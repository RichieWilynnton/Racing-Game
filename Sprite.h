#ifndef SPRITE_H
#define SPRITE_H

#include <vector>
#include <ncurses.h>

using namespace std;

class Sprite
{
public:
    Sprite(const char* path);
    void draw();
private:
    vector<int> pixel;
};

#endif