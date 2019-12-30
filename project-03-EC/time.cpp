#include "time.h"
#include <iostream>

void time::setTime(int initHours, int initMinutes, int initSeconds)
{
    hours = initHours;
    minutes = initMinutes;
    seconds = initSeconds;
}

time::time()
{
    hours = -1;
    minutes = -1;
    seconds = -1;
}

time::time(int initHours, int initMinutes, int initSeconds)
{
    setTime(initHours, initMinutes, initSeconds);
}

void time::printTime() const
{
    std::cout << hours << ":" << minutes << ":" << seconds << ":" << std::endl;
}