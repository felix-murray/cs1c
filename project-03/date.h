#ifndef DATE_H_
#define DATE_H_

#include <string>

class date 
{
    public:
        void setDate(int month, int day, int year);
        int getDay() const;
        int getMonth() const;
        int getYear() const;
        void printDate() const;
        date();
        date(int initMonth, int initDay, int initYear);
    private:
        int month;
        int day;
        int year;
};

#endif