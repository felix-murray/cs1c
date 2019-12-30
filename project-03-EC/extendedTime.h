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


class extendedTime : public time
{
    public:
        void setTime(int initHours, int initMinutes, int initSeconds);
        void printTime() const;
        extendedTime();
        extendedTime(int initHours, int initMinutes, int initSeconds, TimeZone initTimeZone);
    private:
        TimeZone time_zone;
};

#endif