#include <iostream>
#include "date.h"
#include "employee.h"
#include "programmer.h"
#include "softwareArchitect.h"

int main() 
{
    employee test;
    employee first("Felix", "1111499", "949-690-7443", 19, 'M', "Software Developer", 1000);

    system("clear");
    test.printEmployee();
    std::cout << "\n\n";
    first.printEmployee();
}