#include <iostream>
#include "date.h"
#include "employee.h"
#include "programmer.h"
#include "softwareArchitect.h"

/*
4. Overload the addition operator to add a constant to a
CS1Cemployee’s age. For example: StarC1SCEmployee =
StarC1SCEmployee + 2. The output should state how many
years were added to the age.
*/

int main() 
{    
    system("clear");

    std::cout << "\nCreating Objects Using Constructors..." << "\n\n";
    employee test;
    employee custom("Stephen Colbert", "12345", "310-555-5555", 51, 'M', "Comedian", 70123, 5, 8, 2015);
    employee custom2("James Corden", "87654", "703-703-1234", 37, 'M', "Comedian", 900000, 12, 25, 2014);
    employee custom3("Katie Courie", "77777", "203-555-6789", 58, 'F', "News Reporter", 500500, 3, 1, 2005);
    programmer gates("Mary Coder", "65432", "310-555-5555", 28, 'F', "Programmer", 770123, 2, 8, 2010, 6543222, "Mary Leader", 7, true, true);
    programmer gates2("Gabe Newell", "65432", "310-555-5555", 28, 'F', "Programmer", 770123, 2, 8, 2010, 6543222, "Mary Leader", 7, true, true);

    std::cin >> test;
    std::cout << test;
    std::cout << "\n";
    std::cout << custom;
    std::cout << "\n";
    std::cout << gates;
    std::cout << "\n";

    if (custom == gates)
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
    std::cout << "Testing preincrement..." << std::endl;
    std::cout << "\n";
    ++custom;
    std::cout << custom;

    std::cout << "\n";
    custom = custom + 5;
    std::cout << "\n";
    std::cout << custom;

    
}
