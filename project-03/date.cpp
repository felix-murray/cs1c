#include "date.h"
#include <iostream>
#include <string>

    void date::setDate(int initMonth, int initDay, int initYear)
    {
        month = initMonth;
        day = initDay;
        year = initYear;
    }
    
    date::date()
    {
        month = -1;
        day = -1;
        year = -1;
    }

    date::date(int initMonth, int initDay, int initYear)
    {
        month = initMonth;
        day = initDay;
        year = initYear;
    }
    
    void date::printDate() const
    {
        std::cout << month << "/" << day << "/" << year;
    }

  