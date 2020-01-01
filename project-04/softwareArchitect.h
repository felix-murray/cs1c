#ifndef SOFTWAREARCHITECT_H_
#define SOFTWAREARCHITECT_H_

#include <string>
 
class softwareArchitect : public employee
{
    public:
        /* GETTERS */
        int getDepartmentNumber();
        std::string getSupervisor();
        double getSalaryIncreasePercentage();
        int getYearsExperience();

        /* SETTERS */
        void setDepartmentNumber(int initDepartmentNumber);
        void setSupervisor(std::string initSupervisor);
        void setSalaryIncreasePercentage(double initSalaryIncreasePercentage);
        void setYearsExperience(int initYearsExperience);
        void setAll(int initDepartmentNumber, 
                    std::string initSupervisor, 
                    double initSalaryIncreasePercentage, 
                    int initYearsExperience);

        /* CONSTRUCTORS */
        softwareArchitect();
        softwareArchitect(std::string initName, 
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
                          int initYearsExperience);

        /* METHODS */
        void print();

    private:
        int departmentNumber;
        std::string supervisor;
        double salaryIncreasePercentage;
        int yearsExperience;
};

#endif