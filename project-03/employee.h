#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>
 
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

        /* CONSTRUCTORS */
        employee();
        employee(std::string initName, 
                 std::string initID,
                 std::string initPhoneNumber, 
                 int initAge,
                 char initGender,
                 std::string initJobTitle,
                 int initSalary);

        /* METHODS */
        void printEmployee();

    private:
        std::string name;
        std::string ID;
        std::string phoneNumber;
        int age;
        char gender;
        std::string jobTitle;
        int salary;
        //date::date hireDate;
};

#endif