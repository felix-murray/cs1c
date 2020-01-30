#include <iostream>
#include "time.h"
#include "extendedTime.h"

void ExtendedTime::setTimeZone(TimeZone initTimeZone)
{
    time_zone = initTimeZone;
}

ExtendedTime::ExtendedTime()
{
    time_zone = EMPTY;
}

ExtendedTime::ExtendedTime(int initHours, int initMinutes, int initSeconds, TimeZone initTimeZone)
            : Time(initHours, initMinutes, initSeconds)
{
    setTimeZone(initTimeZone);
}

void ExtendedTime::printTime() const
{
    Time::printTime();

    switch(time_zone)
    {
        case PACIFIC:
            std::cout << "PACIFIC" << std::endl;
            break;
        case MOUNTAIN:
            std::cout << "MOUNTAIN" << std::endl;
            break;
        case CENTRAL:
            std::cout << "CENTRAL" << std::endl;
            break;
        case EASTERN:
            std::cout << "EASTERN" << std::endl;
            break;
        case EMPTY:
            std::cout << "EMPTY" << std::endl;
            break;
    }
}

std::ostream& operator<<(std::ostream& os, ExtendedTime const& obj){
    obj.printTime();
    return os;
}
