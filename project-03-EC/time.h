#ifndef TIME_H_
#define TIME_H_

#include <string>

class Time 
{
    public:
        void setTime(int initHours, int initMinutes, int initSeconds);
        void printTime() const;
        Time();
        Time(int initHours, int initMinutes, int initSeconds);
    private:
        int hours;
        int minutes;
        int seconds;
};

#endif
