#ifndef DATE_H_
#define DATE_H_

#include <string>

class date 
{
    public:
        std::string getMonth();
        std::string getDay();
        std::string getYear();
        
        void setMonth(std::string);
        void setDay(std::string);
        void setYear(std::string);

        date();
        date(std::string initMonth, std::string initDay, std::string initYear);

    private:
        std::string month;
        std::string day;
        std::string year;
};




#endif