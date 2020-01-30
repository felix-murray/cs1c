#include "time.h"
#include <iostream>

/******************************************************************
 *
 * FUNCTION setTime
 *_________________________________________________________________
 * This function sets the time for the object using the passed 
 * params.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int initHours :    integer to set hours to
 * int initMinutes :  integer to set minutes to
 * int initSeconds :  integer to set seconds to
 * POST-CONDITIONS 
 * This function sets the time for the object using the passed 
 * params.
 *
 ******************************************************************/
void Time::setTime(int initHours, int initMinutes, int initSeconds)
{
    hours = initHours;
    minutes = initMinutes;
    seconds = initSeconds;
}


/*********  Constructors  **********/

/* Default Constructor */
Time::Time()
{
    hours = -1;
    minutes = -1;
    seconds = -1;
}

/* Super Constructor */
Time::Time(int initHours, int initMinutes, int initSeconds)
{
    setTime(initHours, initMinutes, initSeconds);
}


/*********  Other Methods  **********/

/******************************************************************
 *
 * FUNCTION printTime
 *_________________________________________________________________
 * This function prints the time for the object to the console in 
 * the format hours:minutes:seconds (00:00:00) 
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function prints the time for the object to the console.
 *
 ******************************************************************/
void Time::printTime() const
{
    /**
     *
     * To make format more eye-friendly, 
     * 0 is placed before single digit times.
     * 
     * Example:
     * 
     * 2:1:8 -> 02:01:08
     * 
     */
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
