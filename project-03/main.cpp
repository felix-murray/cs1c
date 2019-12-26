#include <iostream>
#include "date.h"
#include "employee.h"
#include "programmer.h"
#include "softwareArchitect.h"

int main() 
{
    employee test;
    employee first("Felix", "1111499", "949-690-7443", 19, 'M', "Software Developer", 1000);
    programmer bybel;
    programmer walters("Grant Walters", "5678746", "714-588-1555", 21, 'F', "Web Engineer", 50000, 34, "Tylero", 4.5, false, true);

    system("clear");
    test.printEmployee();
    std::cout << "\n\n";
    first.printEmployee();
    std::cout << "\n\n";
    bybel.printProgrammer();
    std::cout << "\n\n";
    walters.printProgrammer();
}