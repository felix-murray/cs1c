#include <iostream>
#include <string>
#include "employee.h"
#include "programmer.h"


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
int programmer::getDepartmentNumber()
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
std::string programmer::getSupervisor()
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
double programmer::getSalaryIncreasePercentage()
{
    return salaryIncreasePercentage;
}

/******************************************************************
 *
 * FUNCTION getKnowsCPP
 *_________________________________________________________________
 * This function gets knowsCPP for the object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function returns knowsCPP for the object.
 *
 ******************************************************************/
bool programmer::getKnowsCPP()
{
    return knowsCPP;
}

/******************************************************************
 *
 * FUNCTION getKnowsJava
 *_________________________________________________________________
 * This function gets knowsJava for the object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function returns knowsJava for the object.
 *
 ******************************************************************/
bool programmer::getKnowsJava()
{
    return knowsJava;
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
void programmer::setDepartmentNumber(int initDepartmentNumber)
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
void programmer::setSupervisor(std::string initSupervisor)
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
void programmer::setSalaryIncreasePercentage(double initSalaryIncreasePercentage)
{
    salaryIncreasePercentage = initSalaryIncreasePercentage;
}

/******************************************************************
 *
 * FUNCTION setKnowsCPP
 *_________________________________________________________________
 * This function sets the knowsCPP boolean as specified by the 
 * passed param.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * bool initKnowsCPP : passed boolean vaue to set knowsCPP to
 * 
 * POST-CONDITIONS 
 * This function changes the value of knowsCPP.
 *
 ******************************************************************/
void programmer::setKnowsCPP(bool initKnowsCPP)
{
    knowsCPP = initKnowsCPP;
}

/******************************************************************
 *
 * FUNCTION setKnowsJava
 *_________________________________________________________________
 * This function sets the knowsJava boolean as specified by the 
 * passed param.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * bool initKnowsJava : passed boolean vaue to set knowsJava to
 * 
 * POST-CONDITIONS 
 * This function changes the value of knowsJava.
 *
 ******************************************************************/
void programmer::setKnowsJava(bool initKnowsJava)
{
    knowsJava = initKnowsJava;
}

/******************************************************************
 *
 * FUNCTION setAll
 *_________________________________________________________________
 * This function sets all data values for the programmer object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int initDepartmentNumber : passed integer to set department number 
 *                            to
 * int initSupervisor : passed string to set supervisor to 
 * int initSalaryIncreasePercentage : passed double to set 
 *                                    salaryIncreasePercentage to
 * bool initKnowsCPP  : passed boolean vaue to set knowsCPP to
 * bool initKnowsJava : passed boolean vaue to set knowsJava to
 *
 * POST-CONDITIONS 
 * This function changes the values of departmentNumber, supervisor,
 * salaryIncreasePercentage, knowsCPP, and knowsJava using the 
 * appropriate mutator function for each attribute.
 *
 ******************************************************************/
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

/*********  Constructors  **********/

/* Default Constructor */
programmer::programmer()
{
    setAll(-1, "DEFAULT-SUPERVISOR", -1, false, false);
}

/* Super Constructor */
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

/*********  Other Methods  **********/

/******************************************************************
 *
 * FUNCTION print
 *_________________________________________________________________
 * This function prints the programmer object attributes to the 
 * console along with the inherited employee attributes.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * 
 * POST-CONDITIONS 
 * This function prints the programmer object attributes to the 
 * console.
 *
 **************************************s****************************/
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
