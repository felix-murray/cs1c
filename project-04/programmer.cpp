#include <iostream>
#include <string>
#include "employee.h"
#include "programmer.h"

/* GETTERS */
int programmer::getDepartmentNumber()
{
    return departmentNumber;
}

std::string programmer::getSupervisor()
{
    return supervisor;
}

double programmer::getSalaryIncreasePercentage()
{
    return salaryIncreasePercentage;
}

bool programmer::getKnowsCPP()
{
    return knowsCPP;
}

bool programmer::getKnowsJava()
{
    return knowsJava;
}

/* SETTERS */
void programmer::setDepartmentNumber(int initDepartmentNumber)
{
    departmentNumber = initDepartmentNumber;
}

void programmer::setSupervisor(std::string initSupervisor)
{
    supervisor = initSupervisor;
}

void programmer::setSalaryIncreasePercentage(double initSalaryIncreasePercentage)
{
    salaryIncreasePercentage = initSalaryIncreasePercentage;
}

void programmer::setKnowsCPP(bool initKnowsCPP)
{
    knowsCPP = initKnowsCPP;
}

void programmer::setKnowsJava(bool initKnowsJava)
{
    knowsJava = initKnowsJava;
}

void programmer::setAll(int initDepartmentNumber, 
                        std::string initSupervisor, 
                        double initSalaryIncreasePercentage,
                        bool initKnowsCPP,
                        bool initKnowsJava)
{
    setDepartmentNumber(initDepartmentNumber);
    setSupervisor(initSupervisor);
    setSalaryIncreasePercentage(initSalaryIncreasePercentage); 
    setKnowsCPP(initKnowsCPP);
    setKnowsJava(initKnowsJava);
}

/* CONSTRUCTORS */
programmer::programmer()
{
    setAll(-1, "DEFAULT-SUPERVISOR", -1, false, false);
}

programmer::programmer(std::string initName, 
                       std::string initID,
                       std::string initPhoneNumber, 
                       int initAge,
                       char initGender,
                       std::string initJobTitle,
                       int initSalary,
                       int month,
                       int day,
                       int year,
                       int initDepartmentNumber, 
                       std::string initSupervisor, 
                       double initSalaryIncreasePercentage,
                       bool initKnowsCPP,
                       bool initKnowsJava)
            : employee(initName, initID, initPhoneNumber, initAge, initGender, initJobTitle, initSalary, month, day, year)
{
    setAll(initDepartmentNumber, initSupervisor, initSalaryIncreasePercentage, initKnowsCPP, initKnowsJava);
}

/* METHODS */
void programmer::print()
{
    employee::print();
    std::cout << "Department Number: " << getDepartmentNumber() << std::endl;
    std::cout << "Supervisor: " << getSupervisor() << std::endl;
    std::cout << "Salary Increase Percentage: " << getSalaryIncreasePercentage()  << "%" << std::endl;
    std::cout << "Languages Known: ";

    if (getKnowsCPP() == true) 
    {
        std::cout << "C++";
    } 

    if (getKnowsJava() == true) 
    {
        std::cout << ", Java";
    } 

    if (getKnowsJava() == false && getKnowsCPP() == false)
    {
        std::cout << "DEFAULT";
    }

    std::cout << std::endl;
}

bool comparePhoneNumber(employee &employeeObj, programmer &programmerObj)
{
    return (employeeObj.getPhoneNumber() == programmerObj.getPhoneNumber());
}

bool operator==(employee &employeeObj, programmer &programmerObj)
{
    return comparePhoneNumber(employeeObj, programmerObj);
}