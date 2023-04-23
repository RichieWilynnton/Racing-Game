#ifndef GAME_H
#define GAME_H

#include <ncurses.h>
#include <chrono>
#include "Car.h"
#include "Background.h"
#include "Map.h"

class Game
{

public:
    void run();

private:
    void init();
    void menu();
    void update();
    void draw();
    void end();

    bool gameRunning = true;

    chrono::steady_clock::time_point startTime = std::chrono::steady_clock::now(); // Starts timer

    Car *car;
    Background *background;
    Map *map;
    char input;
};

#endif