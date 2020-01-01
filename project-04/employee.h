#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>
#include "date.h"
 
class employee
{
    public:
        /* GETTERS */
        std::string getName();
        std::string getID();
        std::string getPhoneNumber();
        int getAge();
        char getGender();
        std::string getJobTitle();
        int getSalary();

        /* SETTERS */
        void setName(std::string initName);
        void setID(std::string initID);
        void setPhoneNumber(std::string initPhoneNumber);
        void setAge(int initAge);
        void setGender(char initGender);
        void setJobTitle(std::string initJobTitle);
        void setSalary(int initSalary);
        void setHireDate(int initMonth, int initDay, int initYear);
        void setAll(std::string initName, 
                    std::string initID,
                    std::string initPhoneNumber, 
                    int initAge,
                    char initGender,
                    std::string initJobTitle,
                    int initSalary, 
                    int initMonth, 
                    int initDay, 
                    int initYear);

        /* CONSTRUCTORS */
        employee();
        employee(std::string initName, 
                 std::string initID,
                 std::string initPhoneNumber, 
                 int initAge,
                 char initGender,
                 std::string initJobTitle,
                 int initSalary, 
                 int initMonth, 
                 int initDay, 
                 int initYear);
    
        /* METHODS */
        void print();

        /* OPERATORS */
        employee operator+(int val);                                            //Unary (Addition)
        friend employee& operator++(employee& orig);                            //preincrement
        friend employee operator++(employee& orig, int);                        //postincrement
        friend std::ostream& operator<<(std::ostream& os, employee& obj);        //insertion stream
        friend std::istream& operator>>(std::istream& is, employee& obj);
    private:
        std::string name;
        std::string ID;
        std::string phoneNumber;
        int age;
        char gender;
        std::string jobTitle;
        int salary;
        date hireDate;
};

#endif