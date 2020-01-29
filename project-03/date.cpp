#include "date.h"
#include <iostream>
#include <string>

/******************************************************************
 *
 * FUNCTION setDate
 *_________________________________________________________________
 * This function sets the date as specified by the passed params.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int initMonth : passed integer to set month to
 * int initDay   : passed integer to set day to
 * int initYear  : passed integer to set year to
 * 
 * POST-CONDITIONS 
 * This function changes the values of month, day, and year for 
 * the object.
 *
 ******************************************************************/
void date::setDate(int initMonth, int initDay, int initYear)
{
    month = initMonth;
    day = initDay;
    year = initYear;
}

/* Default Constructor */
date::date()
{
    month = -1;
    day = -1;
    year = -1;
}

/* Super Constructor */
date::date(int initMonth, int initDay, int initYear)
{
    month = initMonth;
    day = initDay;
    year = initYear;
}

/******************************************************************
 *
 * FUNCTION printDate
 *_________________________________________________________________
 * This function prints the date to the console in format MM/DD/YYYY
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * 
 * POST-CONDITIONS 
 * This function prints the date to the console in format MM/DD/YYYY
 *
 ******************************************************************/
void date::printDate() const
{
    std::cout << month << "/" << day << "/" << year;
}

  