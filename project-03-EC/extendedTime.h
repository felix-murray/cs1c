#ifndef EXTENDEDTIME_H_
#define EXTENDEDTIME_H_

#include <string>
#include "time.h"

enum TimeZone 
{
    PACIFIC,
    MOUNTAIN,
    CENTRAL,
    EASTERN,
    EMPTY
};

class ExtendedTime : public Time
{
    public:
        void setTimeZone(TimeZone initTimeZone);
        void printTime() const;
        ExtendedTime();
        ExtendedTime(int initHours, int initMinutes, int initSeconds, TimeZone initTimeZone);
        friend std::ostream& operator<<(std::ostream& os, ExtendedTime const& obj);
    private:
        TimeZone time_zone;
};

#endif
