#include <iostream>
#include <string>
#include "employee.h"
#include "softwareArchitect.h"

/*********  Accessor Functions  **********/

/******************************************************************
 *
 * FUNCTION getDepartmentNumber
 *_________________________________________________________________
 * This function gets the department number for the object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function returns the value of departmentNumber for the object.
 *
 ******************************************************************/
int softwareArchitect::getDepartmentNumber()
{
    return departmentNumber;
}

/******************************************************************
 *
 * FUNCTION getSupervisor
 *_________________________________________________________________
 * This function gets the supervisor for the object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function returns the value of supervisor for the object.
 *
 ******************************************************************/
std::string softwareArchitect::getSupervisor()
{
    return supervisor;
}

/******************************************************************
 *
 * FUNCTION getSalaryIncreasePercentage
 *_________________________________________________________________
 * This function gets the salaryIncreasePercentage for the object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function returns the value of salaryIncreasePercentage 
 * for the object.
 *
 ******************************************************************/
double softwareArchitect::getSalaryIncreasePercentage()
{
    return salaryIncreasePercentage;
}

/******************************************************************
 *
 * FUNCTION getYearsExperience
 *_________________________________________________________________
 * This function gets the yearsExperience for the object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function returns the value of yearsExperience for the object.
 *
 ******************************************************************/
int softwareArchitect::getYearsExperience()
{
    return yearsExperience;
}

/*********  Mutator Functions  **********/

/******************************************************************
 *
 * FUNCTION setDepartmentNumber
 *_________________________________________________________________
 * This function sets the department number as specified by the 
 * passed param.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int initDepartmentNumber : passed integer to set department number 
 *                            to
 * 
 * POST-CONDITIONS 
 * This function changes the value of departmentNumber for the object.
 *
 ******************************************************************/
void softwareArchitect::setDepartmentNumber(int initDepartmentNumber)
{
    departmentNumber = initDepartmentNumber;
}

/******************************************************************
 *
 * FUNCTION setSupervisor
 *_________________________________________________________________
 * This function sets the supervisor as specified by the passed 
 * param.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int initSupervisor : passed string to set supervisor to
 * 
 * POST-CONDITIONS 
 * This function changes the value of supervisor for the object.
 *
 ******************************************************************/
void softwareArchitect::setSupervisor(std::string initSupervisor)
{
    supervisor = initSupervisor;
}

/******************************************************************
 *
 * FUNCTION setSalaryIncreasePercentage
 *_________________________________________________________________
 * This function sets the salary increase percentage as specified 
 * by the passed param.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int initetSalaryIncreasePercentage : passed double to set 
 * salaryIncreasePercentage to
 * 
 * POST-CONDITIONS 
 * This function changes the value of salaryIncreasePercentage 
 * for the object.
 *
 ******************************************************************/
void softwareArchitect::setSalaryIncreasePercentage(double initSalaryIncreasePercentage)
{
    salaryIncreasePercentage = initSalaryIncreasePercentage;
}

/******************************************************************
 *
 * FUNCTION setYearsExperience
 *_________________________________________________________________
 * This function sets the yearsExperience as specified by the 
 * passed param.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function canges the value of yearsExperience for the object.
 *
 ******************************************************************/
void softwareArchitect::setYearsExperience(int initYearsExperience)
{
    yearsExperience = initYearsExperience;
}

/******************************************************************
 *
 * FUNCTION setAll
 *_________________________________________________________________
 * This function sets all data values for the softwareArchitect 
 * object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int initDepartmentNumber : passed integer to set department number 
 *                            to
 * string initSupervisor    : passed string to set supervisor to 
 * int initSalaryIncreasePercentage : passed double to set 
 *                                    salaryIncreasePercentage to
 * int yearsExperience      : passed int to set yearsExpeience to
 *
 * POST-CONDITIONS 
 * This function changes the values of departmentNumber, supervisor,
 * salaryIncreasePercentage, and yearsExperience using the 
 * appropriate mutator function for each attribute.
 *
 ******************************************************************/
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

/*********  Constructors  **********/

/* Default Constructor */
softwareArchitect::softwareArchitect()
{
    setAll(-1, "DEFAULT-SUPERVISOR", -1, -1);
}

/* Super Constructor */
softwareArchitect::softwareArchitect(std::string initName, 
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
                       int initYearsExperience)
            : employee(initName, initID, initPhoneNumber, initAge, initGender, initJobTitle, initSalary, month, day, year)
{
    setAll(initDepartmentNumber, initSupervisor, initSalaryIncreasePercentage, initYearsExperience);
}

/*********  Other Methods  **********/

/******************************************************************
 *
 * FUNCTION print
 *_________________________________________________________________
 * This function prints the softwareArchiect object attributes to the 
 * console along with the inherited employee attributes
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * 
 * POST-CONDITIONS 
 * This function prints the sofwareArchiect object attributes to the 
 * console.
 *
 ******************************************************************/
void softwareArchitect::print()
{
    employee::print();
    std::cout << "Department Number: " << getDepartmentNumber() << std::endl;
    std::cout << "Supervisor: " << getSupervisor() << std::endl;
    std::cout << "Salary Increase Percentage: " << getSalaryIncreasePercentage()  << "%" << std::endl;
    std::cout << "Years of Experience: " << getYearsExperience() << std::endl;
}