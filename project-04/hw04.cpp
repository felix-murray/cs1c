//--------------------------------------------------------------------------
//  Project name: HW04
//--------------------------------------------------------------------------
//  Creator's name and email: Felix Murray felix.murray@gmail.com
//  Course Selection: CS1C
//  Due Date: 2/11/2020
//--------------------------------------------------------------------------
//  Purpose: Create objects of different classes utilizing inheritance and 
//           composition and instantiate said objects using constructors 
//           and mutator functions as well as utilize overloaded operators.
//--------------------------------------------------------------------------
//  Algorithm:
//      Step 1: Create employee object using default constructor and all 
//              other objects using super constructors.
//      Step 2: Use employee's extraction stream overload to recieve values
//              from the user to change all object attributes.
//      Step 4: Use object print methods to print all created objects
//              to the console.
//      Step 5: Test comparePhoneNumber and Equals Operator Overload and 
//              output results of each comparison.
//      Step 6: Test postincrement, preincrement, addToAge function, and 
//              Addition Operator Overload and output results of each to
//              the console.
//      Step 7: Program Exits.
//--------------------------------------------------------------------------

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
    employee custom4("John Dilworth", "111499", "203-555-6789", 58, 'F', "News Reporter", 1, 3, 1, 2005);
    programmer gates("Mary Coder", "65432", "310-555-5555", 28, 'F', "Programmer", 770123, 2, 8, 2010, 6543222, "Mary Leader", 7, true, true);
    programmer gates2("Gabe Newell", "65432", "310-555-5555", 28, 'F', "Programmer", 770123, 2, 8, 2010, 6543222, "Mary Leader", 7, true, true);

    std::cin >> test;
    std::cout << test;
    std::cout << "\n";
    std::cout << custom;
    std::cout << "\n";
    std::cout << gates;
    std::cout << "\n";

    std::cout << "Testing comparePhoneNumber Method (first case should be true)..." << std::endl;
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

    std::cout << "Testing comparePhoneNumber Method (case should be false)..." << std::endl;
    std::cout << "\n";

    if (comparePhoneNumber(custom2, gates2))
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

    std::cout << "Testing equality operator... (case should be true)" << std::endl;
    std::cout << "\n";

    if (custom3 == custom4)
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

    std::cout << "Testing equality operator... (case should be false)" << std::endl;
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

 /* In this instance, there is no percievable difference between pre and post increment, however
    in general, the difference will be that i++ creates a copy, increases the value, and returns the copy,
    while ++i increases the value and returns it as well. Postincrement, therefore, incurs more overhead */
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
