#include <iostream>
#include "date.h"
#include "employee.h"
#include "programmer.h"
#include "softwareArchitect.h"

int main() 
{    
    system("clear");

    employee test;
    employee custom("Stephen Colbert", "12345", "310-555-5555", 51, 'M', "Comedian", 70123, 5, 8, 2015);
    employee custom2("James Corden", "87654", "703-703-1234", 37, 'M', "Comedian", 900000, 12, 25, 2014);
    employee custom3("Katie Courie", "77777", "203-555-6789", 58, 'F', "News Reporter", 500500, 3, 1, 2005);
    programmer gates("Mary Coder", "65432", "310-555-5555", 28, 'F', "Programmer", 770123, 2, 8, 2010, 6543222, "Mary Leader", 7, true, true);
    programmer gates2("Gabe Newell", "65432", "310-555-5555", 28, 'F', "Programmer", 770123, 2, 8, 2010, 6543222, "Mary Leader", 7, true, true);

    //Use of overloaded stream extraction and insertion
    std::cin >> test;
    std::cout << test;
    std::cout << "\n";
    std::cout << custom;
    std::cout << "\n";
    std::cout << gates;
    std::cout << "\n";

    std::cout << "Testing comparePhoneNumber Method..." << std::endl;
    std::cout << "\n";

    if (comparePhoneNumber(custom, gates))
    {
    std::cout << "Phone Numbers are the same!";
    std::cout << std::endl;
    std::cout << "\n";
    } else
    {
    std::cout << "Phone Numbers are NOT the same!";
    std::cout << std::endl;
    std::cout << "\n";
    }

    std::cout << "Testing equality operator..." << std::endl;
    std::cout << "\n";

    if (custom == custom2)
    {
        std::cout << "Phone Numbers are the same!";
        std::cout << std::endl;
        std::cout << "\n";
    } else
    {
        std::cout << "Phone Numbers are NOT the same!";
        std::cout << std::endl;
        std::cout << "\n";
    }

    custom++;
    std::cout << "Testing postincrement..." << std::endl;
    std::cout << "\n";
    std::cout << custom;
    std::cout << "\n";
    std::cout << "Testing preincrement..." << std::endl;
    std::cout << "\n";
    ++custom;
    std::cout << custom;
    std::cout << "\n";
    std::cout << "Testing addToAge Method..." << std::endl;
    std::cout << "\n";
    custom.addToAge(10);
    std::cout << "\n";
    std::cout << custom;
    std::cout << "\n";
    
    std::cout << "Testing Employee Addition Operator..." << std::endl;
    std::cout << "\n";
    custom = custom + 5;
    std::cout << "\n";
    std::cout << custom;

    
}
