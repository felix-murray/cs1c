#ifndef PROGRAMMER_H_
#define PROGRAMMER_H_

#include <string>
 
class programmer : public employee
{
    public:
        /*********  Accessor Functions  **********/
        int getDepartmentNumber();
        std::string getSupervisor();
        double getSalaryIncreasePercentage();
        bool getKnowsCPP();
        bool getKnowsJava();

        /*********  Mutator Functions  **********/
        void setDepartmentNumber(int initDepartmentNumber);
        void setSupervisor(std::string initSupervisor);
        void setSalaryIncreasePercentage(double initSalaryIncreasePercentage);
        void setKnowsCPP(bool initKnowsCPP);
        void setKnowsJava(bool initKnowsJava);
        void setAll(int initDepartmentNumber, 
                    std::string initSupervisor, 
                    double initSalaryIncreasePercentage,
                    bool initKnowsCPP,
                    bool initKnowsJava);

        /*********  Constructors  **********/
        programmer();
        programmer(std::string initName, 
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
                       bool initKnowsJava);

        /*********  Other Methods  **********/
        void print();
        friend bool comparePhoneNumber(employee &employeeObj, programmer &programmerObj);
    private:
        int departmentNumber;
        std::string supervisor;
        double salaryIncreasePercentage;
        bool knowsCPP;
        bool knowsJava;
};

#endif
