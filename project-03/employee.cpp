#include "employee.h"
#include "date.h"
#include <iostream>
#include <string>

/*********  Accessor Functions  **********/

/******************************************************************
 *
 * FUNCTION getName
 *_________________________________________________________________
 * This function gets the name for the object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function returns the value of name for the object.
 *
 ******************************************************************/
std::string employee::getName()
{
    return name;
}

/******************************************************************
 *
 * FUNCTION getID
 *_________________________________________________________________
 * This function gets the ID for the object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function returns the value of ID for the object.
 *
 ******************************************************************/
std::string employee::getID()
{
    return ID;
}

/******************************************************************
 *
 * FUNCTION getPhoneNumber
 *_________________________________________________________________
 * This function gets the phoneNumber for the object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function returns the value of phoneNumber for the object.
 *
 ******************************************************************/
std::string employee::getPhoneNumber()
{
    return phoneNumber;
}

/******************************************************************
 *
 * FUNCTION getAge
 *_________________________________________________________________
 * This function gets the age for the object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function returns the value of age for the object.
 *
 ******************************************************************/
int employee::getAge()
{
    return age;
}

/******************************************************************
 *
 * FUNCTION getGender
 *_________________________________________________________________
 * This function gets the gender for the object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function returns the value of gender for the object.
 *
 ******************************************************************/
char employee::getGender()
{
    return gender;
}

/******************************************************************
 *
 * FUNCTION getJobTitle
 *_________________________________________________________________
 * This function gets the jobTitle for the object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function returns the value of jobTitle for the object.
 *
 ******************************************************************/
std::string employee::getJobTitle()
{
    return jobTitle;
}

/******************************************************************
 *
 * FUNCTION getSalary
 *_________________________________________________________________
 * This function gets the salary for the object.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function returns the value of salary for the object.
 *
 ******************************************************************/
int employee::getSalary()
{
    return salary;
}

/*********  Mutator Functions  **********/

/******************************************************************
 *
 * FUNCTION setName
 *_________________________________________________________________
 * This function sets the name as specified by the passed params.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * string initName : passed string to set name to
 * 
 * POST-CONDITIONS 
 * This function changes the value of name for the object.
 *
 ******************************************************************/
void employee::setName(std::string initName)
{
    name = initName;
}

/******************************************************************
 *
 * FUNCTION setID
 *_________________________________________________________________
 * This function sets the ID as specified by the passed params.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * string initID : passed string to set ID to
 * 
 * POST-CONDITIONS 
 * This function changes the value of ID for the object.
 *
 ******************************************************************/
void employee::setID(std::string initID)
{
    ID = initID;
}

/******************************************************************
 *
 * FUNCTION setPhoneNumber
 *_________________________________________________________________
 * This function sets the phoneNumber as specified by the passed params.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * string initPhoneNumber : passed string to set phoneNumber to
 * 
 * POST-CONDITIONS 
 * This function changes the value of phoneNumber for the object.
 *
 ******************************************************************/
void employee::setPhoneNumber(std::string initPhoneNumber)
{
    phoneNumber = initPhoneNumber;
}

/******************************************************************
 *
 * FUNCTION setAge
 *_________________________________________________________________
 * This function sets the age as specified by the passed params.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int initAge : passed integer to set age to
 * 
 * POST-CONDITIONS 
 * This function changes the value of age for the object.
 *
 ******************************************************************/
void employee::setAge(int initAge)
{
    age = initAge;
}

/******************************************************************
 *
 * FUNCTION setGender
 *_________________________________________________________________
 * This function sets the gender as specified by the passed params.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * char initGender : passed char to set gender to
 * 
 * POST-CONDITIONS 
 * This function changes the value of gender for the object.
 *
 ******************************************************************/
void employee::setGender(char initGender)
{   
    gender = initGender;
}

/******************************************************************
 *
 * FUNCTION setJobTitle
 *_________________________________________________________________
 * This function sets the jobTitle as specified by the passed params.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * string initJobTitle : passed string to set jobTitle to
 * 
 * POST-CONDITIONS 
 * This function changes the value of jobTitle for the object.
 *
 ******************************************************************/
void employee::setJobTitle(std::string initJobTitle)
{
    jobTitle = initJobTitle;
}

/******************************************************************
 *
 * FUNCTION setSalary
 *_________________________________________________________________
 * This function sets the salary as specified by the passed params.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int initSalary : passed integer to set salary to
 * 
 * POST-CONDITIONS 
 * This function changes the value of salary for the object.
 *
 ******************************************************************/
void employee::setSalary(int initSalary)
{
    salary = initSalary;
}

/******************************************************************
 *
 * FUNCTION setHireDate
 *_________________________________________________________________
 * This function sets the ID as specified by the passed params by 
 * composing a date object from class date.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int initMonth : passed int to be used in .setDate params
 * int initDay   : passed int to be used in .setDate params
 * int initYear  : passed int to be used in .setDate params
 * 
 * POST-CONDITIONS 
 * This function changes the value of hireDate for the object.
 *
 ******************************************************************/
void employee::setHireDate(int initMonth, int initDay, int initYear)
{
    hireDate.setDate(initMonth, initDay, initYear);
}

/******************************************************************
 *
 * FUNCTION setAll
 *_________________________________________________________________
 * This function sets the name, ID, phoneNumber, age, gender, 
 * jobTitle, salary, and hireDate as specified by the passed params.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int initMonth : passed int to be used in .setDate params
 * int initDay   : passed int to be used in .setDate params
 * int initYear  : passed int to be used in .setDate params
 * 
 * POST-CONDITIONS 
 * This function changes the values of name, ID, phoneNumber, age,
 * gender, jobTitle, salary, and hireDate for the object.
 *
 ******************************************************************/
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


/*********  CONSTRUCTORS  **********/

/* Default Constructor */
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

/* Super Constructor */
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
                   : hireDate(initMonth, 
                              initDay, 
                              initYear)
{
    setAll(initName, initID, initPhoneNumber, initAge, initGender, initJobTitle, initSalary, initMonth, initDay, initYear);
}


/*********  Other Methods  **********/

/******************************************************************
 *
 * FUNCTION print
 *_________________________________________________________________
 * This function prints the employee object data to the console.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * 
 * POST-CONDITIONS 
 * This function prints the employee object data to the console.
 *
 ******************************************************************/
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
    //calling date class print method
    hireDate.printDate();
    std::cout << std::endl;
}