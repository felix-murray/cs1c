#ifndef TIME_H_
#define TIME_H_

#include <string>

class time 
{
    public:
        void setTime(int initHours, int initMinutes, int initSeconds);
        void printTime() const;
        time();
        time(int initHours, int initMinutes, int initSeconds);
    private:
        int hours;
        int minutes;
        int seconds;
};

#endif