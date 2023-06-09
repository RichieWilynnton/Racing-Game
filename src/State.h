#ifndef STATE_H
#define STATE_H

#include "Road.h"
#include "Car.h"
#include <string>
#include <vector>
#include <chrono>
using namespace std;

class State
{
public:
    int carColor = 1;
    int difficulty = 1;
    char key;              // current key input
    float elapsedTime = 0; // time between frame, aka deltaTime
    vector<vector<int>> graphic = vector<vector<int>>(50, vector<int>(100, 5));

    float distance = 0;       // Distance car has travelled around track
    float best = 0;           // Fastest time in one loop
    float currentLapTime = 0; // Current lap time
    string stats[5] = {"Best: ", "Last: ", "Finished: ", "Time: ", "Speed: "};
    int endLine;

    int WIDTH = 100; // width of window
    int HEIGHT = 50; // height of window

    void update();

    Road *road;
    Car *car;
};

#endif
