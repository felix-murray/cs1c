#include "date.h"
#include <iostream>
#include <string>

std::string date::getMonth()
{
    return month;
}

std::string date::getDay()
{
    return day;
}

std::string date::getYear()
{
    return year;
}

void date::setMonth(std::string initMonth)
{
    month = initMonth;
}

void date::setDay(std::string initDay)
{
    day = initDay;
}

void date::setYear(std::string initYear)
{
    year = initYear;
}

date::date()
{
    setDay("DEFAULT-DAY");
    setMonth("DEFAULT-MONTH");
    setYear("DEFAULT-YEAR");
}

date::date(std::string initMonth, std::string initDay, std::string initYear)
{
    setDay(initDay);
    setMonth(initMonth);
    setYear(initYear);
}