#include "time.h"
#include <iostream>

void Time::setTime(int initHours, int initMinutes, int initSeconds)
{
    hours = initHours;
    minutes = initMinutes;
    seconds = initSeconds;
}

Time::Time()
{
    hours = -1;
    minutes = -1;
    seconds = -1;
}

Time::Time(int initHours, int initMinutes, int initSeconds)
{
    setTime(initHours, initMinutes, initSeconds);
}

void Time::printTime() const
{
    if (hours < 10)
    {
        std::cout << "0" << hours << ":";    
    } 
    else 
    {
        std::cout << hours << ":";    
    }
    if (minutes < 10)
    {
        std::cout << "0" << minutes << ":";    
    }
    else 
    {
        std::cout << minutes << ":";    
    }
    if (seconds < 10)
    {
        std::cout << "0" << seconds << " ";    
    }
    else 
    {
        std::cout << seconds << " ";  
    }
}
