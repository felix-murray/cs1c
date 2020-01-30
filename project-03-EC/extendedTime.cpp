#include <iostream>
#include "time.h"
#include "extendedTime.h"

/******************************************************************
 *
 * FUNCTION setTimeZone
 *_________________________________________________________________
 * This function sets the TimeZone for the object using the passed 
 * params.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * TimeZone initTimeZone : TimeZone to set time_zone to
 * POST-CONDITIONS 
 * This function sets the TimeZone for the object using the passed 
 * params.
 *
 ******************************************************************/
void ExtendedTime::setTimeZone(TimeZone initTimeZone)
{
    time_zone = initTimeZone;
}

/*********  Constructors  **********/

/* Default Constructor */
ExtendedTime::ExtendedTime()
{
    time_zone = EMPTY;
}

/* Super Constructor */
ExtendedTime::ExtendedTime(int initHours, int initMinutes, int initSeconds, TimeZone initTimeZone)
            : Time(initHours, initMinutes, initSeconds)
{
    setTimeZone(initTimeZone);
}

/******************************************************************
 *
 * FUNCTION printTime
 *_________________________________________________________________
 * This function prints the TimeZone for the object to the console.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function prints the TimeZone for the object to the console.
 *
 ******************************************************************/
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

/* Operator "<<" Overload */
std::ostream& operator<<(std::ostream& os, ExtendedTime const& obj){
    obj.printTime();
    return os;
}
