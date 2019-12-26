#include <iostream>
#include "date.h"
#include "employee.h"
#include "programmer.h"
#include "softwareArchitect.h"

int main() 
{
    system("clear");
    std::cout << "Creating Employee Object..." << "\n\n";
    employee generic;
    std::cout << "Outputting Employee Using Default Constructor..." << "\n\n";
    generic.print();
    std::cout << "\n";
    std::cout << "Changing Name..." << std::endl;
    generic.setName("Jimmey Fallon");
    std::cout << "Changing ID..." << std::endl;
    generic.setID("12345");
    std::cout << "Changing Phone Number..." << std::endl;
    generic.setPhoneNumber("949-555-1234");
    std::cout << "Changing Age..." << std::endl;
    generic.setAge(40);
    std::cout << "Changing Gender..." << std::endl;
    generic.setGender('M');
    std::cout << "Changing Job Title..." << std::endl;
    generic.setJobTitle("Comedian");
    std::cout << "Changing Salary..." << std::endl;
    generic.setSalary(1000000);
    // std::cout << "Changing Hire Date" << std::endl;
    // generic.setName("Jimmey");
    std::cout << "\nOutputting Changes..." << "\n\n";
    generic.print();

    std::cout << "Creating Programmer Object..." << "\n\n";
    programmer generic2;
    std::cout << "Outputting Programmer Using Default Constructor..." << "\n\n";
    generic2.print();
    std::cout << "\n";
    std::cout << "Changing Name..." << std::endl;
    generic2.setName("Sam Software");
    std::cout << "Changing ID..." << std::endl;
    generic2.setID("54321");
    std::cout << "Changing Phone Number..." << std::endl;
    generic2.setPhoneNumber("819-123-4567");
    std::cout << "Changing Age..." << std::endl;
    generic2.setAge(21);
    std::cout << "Changing Gender..." << std::endl;
    generic2.setGender('M');
    std::cout << "Changing Job Title..." << std::endl;
    generic2.setJobTitle("Programmer");
    std::cout << "Changing Salary..." << std::endl;
    generic2.setSalary(223000);
    std::cout << "Changing Department Number..." << std::endl;
    generic2.setDepartmentNumber(5432122);
    std::cout << "Changing Supervisor..." << std::endl;
    generic2.setSupervisor("Joe Boss");
    std::cout << "Changing Raise Percentage..." << std::endl;
    generic2.setSalaryIncreasePercentage(4);
    std::cout << "Changing C++ Knowledge..." << std::endl;
    generic2.setKnowsCPP(true);
    std::cout << "Changing Java Knowledge..." << std::endl;
    generic2.setKnowsJava(false);
    // std::cout << "Changing Hire Date" << std::endl;
    // generic2.setName("Jimmey");
    std::cout << "\nOutputting Changes..." << "\n\n";
    generic2.print();

    std::cout << "Creating Software Architect Object..." << "\n\n";
    softwareArchitect generic3;
    std::cout << "Outputting Software Architect Using Default Constructor..." << "\n\n";
    generic3.print();
    std::cout << "\n";
    std::cout << "Changing Name..." << std::endl;
    generic3.setName("Alex Arch");
    std::cout << "Changing ID..." << std::endl;
    generic3.setID("88888");
    std::cout << "Changing Phone Number..." << std::endl;
    generic3.setPhoneNumber("819-123-4444");
    std::cout << "Changing Age..." << std::endl;
    generic3.setAge(31);
    std::cout << "Changing Gender..." << std::endl;
    generic3.setGender('M');
    std::cout << "Changing Job Title..." << std::endl;
    generic3.setJobTitle("Architect");
    std::cout << "Changing Salary..." << std::endl;
    generic3.setSalary(323000);
    std::cout << "Changing Department Number..." << std::endl;
    generic3.setDepartmentNumber(5434222);
    std::cout << "Changing Supervisor..." << std::endl;
    generic3.setSupervisor("Big Boss");
    std::cout << "Changing Raise Percentage..." << std::endl;
    generic3.setSalaryIncreasePercentage(5);
    std::cout << "Changing Years of Experince";
    generic3.setYearsExperience(4);
    // std::cout << "Changing Hire Date" << std::endl;
    // generic2.setName("Jimmey");
    std::cout << "\nOutputting Changes..." << "\n\n";
    generic3.print();


    std::cout << "\nCreating Remaining Objects Using Constructors..." << "\n\n";
    employee custom("Stephen Colbert", "12345", "310-555-5555", 51, 'M', "Comedian", 70123);
    employee custom2("James Corden", "87654", "703-703-1234", 37, 'M', "Comedian", 900000);
    employee custom3("Katie Courie", "77777", "203-555-6789", 58, 'F', "News Reporter", 500500);
    programmer gates("Mary Coder", "65432", "310-555-5555", 28, 'F', "Programmer", 770123, 6543222, "Mary Leader", 7, true, true);
    softwareArchitect gates2("Sally Designer", "87878", "310-555-8888", 38, 'F', "Architect", 870123, 654322, "Big Boss", 8, 11);

    custom.print();
    std::cout << "\n";
    custom2.print();
    std::cout << "\n";
    custom3.print();
    std::cout << "\n";
    gates.print();
    std::cout << "\n";
    gates2.print();
}
