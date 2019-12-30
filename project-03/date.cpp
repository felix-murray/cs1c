#include "date.h"
#include <iostream>
#include <string>

    void date::setDate(int initMonth, int initDay, int initYear)
    {
        month = initMonth;
        day = initDay;
        year = initYear;
    }

    int date::getDay() const
    {
        return day;
    }

    int date::getMonth() const
    {
        return month;
    }

    int date::getYear() const
    {
        return year;
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

  