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
        case 0:
            std::cout << "PACIFIC" << std::endl;
            break;
        case 1:
            std::cout << "MOUNTAIN" << std::endl;
            break;
        case 2:
            std::cout << "CENTRAL" << std::endl;
            break;
        case 3:
            std::cout << "EASTERN" << std::endl;
            break;
        case 4:
            std::cout << "EMPTY" << std::endl;
            break;
    }
}

std::ostream& operator<<(std::ostream& os, ExtendedTime const& obj){
    obj.printTime();
    return os;
}
