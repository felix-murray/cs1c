#include "employee.h"
#include "date.h"
#include <iostream>
#include <string>

/* GETTERS */

std::string employee::getName()
{
    return name;
}

std::string employee::getID()
{
    return ID;
}

std::string employee::getPhoneNumber()
{
    return phoneNumber;
}

int employee::getAge()
{
    return age;
}

char employee::getGender()
{
    return gender;
}

std::string employee::getJobTitle()
{
    return jobTitle;
}

int employee::getSalary()
{
    return salary;
}

/* SETTERS */

void employee::setName(std::string initName)
{
    name = initName;
}

void employee::setID(std::string initID)
{
    ID = initID;
}

void employee::setPhoneNumber(std::string initPhoneNumber)
{
    phoneNumber = initPhoneNumber;
}

void employee::setAge(int initAge)
{
    age = initAge;
}

void employee::setGender(char initGender)
{   
    gender = initGender;
}

void employee::setJobTitle(std::string initJobTitle)
{
    jobTitle = initJobTitle;
}

void employee::setSalary(int initSalary)
{
    salary = initSalary;
}

void employee::setHireDate(int initMonth, int initDay, int initYear)
{
    hireDate.setDate(initMonth, initDay, initYear);
}

void employee::setAll(std::string initName, 
                      std::string initID,
                      std::string initPhoneNumber, 
                      int initAge,
                      char initGender,
                      std::string initJobTitle,
                      int initSalary, 
                      int initMonth, 
                      int initDay, 
                      int initYear)
{
    name = initName;
    ID = initID;
    phoneNumber = initPhoneNumber;
    age = initAge;
    gender = initGender;
    jobTitle = initJobTitle;
    salary = initSalary;
    hireDate.setDate(initMonth, initDay, initYear);
}

/* CONSTRUCTORS */

employee::employee()
{
    name = "DEFAULT-NAME";
    ID = "DEFAULT-ID";
    phoneNumber = "DEFAULT-PHONE-NUMBER";
    age = -1;
    gender = 'X';
    jobTitle = "DEFAULT-JOB-TITLE";
    salary = -1;
    hireDate.setDate(-1,-1,-1);
}

employee::employee(std::string initName, 
                   std::string initID,
                   std::string initPhoneNumber, 
                   int initAge,
                   char initGender,
                   std::string initJobTitle,
                   int initSalary, 
                   int initMonth, 
                   int initDay, 
                   int initYear)
{
    setAll(initName, initID, initPhoneNumber, initAge, initGender, initJobTitle, initSalary, initMonth, initDay, initYear);
}

/* METHODS */

void employee::print()
{
    std::cout << "~Employee " << getName() << "~" << std::endl;
    std::cout << "ID: " << getID() << std::endl;
    std::cout << "Phone Number: " << getPhoneNumber() <<std::endl;
    std::cout << "Age: " << getAge() << std::endl;
    std::cout << "Gender: " << getGender() << std::endl;
    std::cout << "Job Title: " << getJobTitle() << std::endl;
    std::cout << "Salary: $" << getSalary() << std::endl;
    std::cout << "Hire Date: ";
    hireDate.printDate();
    std::cout << std::endl;
}

employee& operator++(employee& orig)
{
  orig.setAge(orig.getAge() + 1);
  return orig;
}

employee operator++(employee& orig, int)
{
  employee rVal = orig;
  ++orig;
  return rVal;
}

employee employee::operator+(int value)
{
    this->setAge(this->getAge() + value);
    std::cout << value << " years added to age of " << this->getName() << std::endl;
    return *this;
}
