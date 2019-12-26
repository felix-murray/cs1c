#include <iostream>
#include <string>
#include "employee.h"
#include "softwareArchitect.h"

/* GETTERS */
int softwareArchitect::getDepartmentNumber()
{
    return departmentNumber;
}

std::string softwareArchitect::getSupervisor()
{
    return supervisor;
}

double softwareArchitect::getSalaryIncreasePercentage()
{
    return salaryIncreasePercentage;
}

int softwareArchitect::getYearsExperience()
{
    return yearsExperience;
}

/* SETTERS */
void softwareArchitect::setDepartmentNumber(int initDepartmentNumber)
{
    departmentNumber = initDepartmentNumber;
}

void softwareArchitect::setSupervisor(std::string initSupervisor)
{
    supervisor = initSupervisor;
}

void softwareArchitect::setSalaryIncreasePercentage(double initSalaryIncreasePercentage)
{
    salaryIncreasePercentage = initSalaryIncreasePercentage;
}

void softwareArchitect::setYearsExperience(int initYearsExperience)
{
    yearsExperience = initYearsExperience;
}

void softwareArchitect::setAll(int initDepartmentNumber, 
                        std::string initSupervisor, 
                        double initSalaryIncreasePercentage,
                        int initYearsExperience)
{
    setDepartmentNumber(initDepartmentNumber);
    setSupervisor(initSupervisor);
    setSalaryIncreasePercentage(initSalaryIncreasePercentage); 
    setYearsExperience(initYearsExperience);
}

/* CONSTRUCTORS */
softwareArchitect::softwareArchitect()
{
    setAll(-1, "DEFAULT-SUPERVISOR", -1, -1);
}

softwareArchitect::softwareArchitect(std::string initName, 
                       std::string initID,
                       std::string initPhoneNumber, 
                       int initAge,
                       char initGender,
                       std::string initJobTitle,
                       int initSalary,
                       int initDepartmentNumber, 
                       std::string initSupervisor, 
                       double initSalaryIncreasePercentage,
                       int initYearsExperience)
            : employee(initName, initID, initPhoneNumber, initAge, initGender, initJobTitle, initSalary)
{
    setAll(initDepartmentNumber, initSupervisor, initSalaryIncreasePercentage, initYearsExperience);
}

/* METHODS */
void softwareArchitect::print()
{
    employee::print();
    std::cout << "Department Number: " << getDepartmentNumber() << std::endl;
    std::cout << "Supervisor: " << getSupervisor() << std::endl;
    std::cout << "Salary Increase Percentage: " << getSalaryIncreasePercentage()  << "%" << std::endl;
    std::cout << "Years of Experience: " << getYearsExperience() << std::endl;
}