#include "Background.h"
#include "Sprite.h"
#include "State.h"
#include <ncurses.h>
#include <fstream>

void Background::draw()
{
    vector<vector<int> > &graphic = State::graphic;
    for (int y = 0; y < State::HEIGHT / 2; y++)
    {
        for (int x = 0; x < State::WIDTH; x++)
        {

            graphic[y][x] = 1;
        }
    }
    sprite = new Sprite("background.txt");
    sprite->draw(0, 0);
}
