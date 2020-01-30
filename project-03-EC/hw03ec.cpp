//--------------------------------------------------------------------------
//  Project name: HW03-EC
//--------------------------------------------------------------------------
//  Creator's name and email: Felix Murray felix.murray@gmail.com
//  Course Selection: CS1C
//  Due Date: 1/30/2020
//--------------------------------------------------------------------------
//  Purpose: Provide functionality to create extendedTime and Invoice objects
//           while also using time objects in each.
//--------------------------------------------------------------------------
//  Algorithm:
//      Step 1: Clear console.
//      Step 2: Initialize ExtendedTime and Invoice objects with constructors.
//      Step 3: Print both objects using std::cout 
//      Step 4: Exit.
//--------------------------------------------------------------------------
#include <iostream>
#include "time.h"
#include "extendedTime.h"
#include "invoice.h"

int main ()
{
    system("clear");
    ExtendedTime extTime (2, 54, 3, PACIFIC);
    Invoice receipet(12, 8, 56);

    std::cout << "EXTENDED TIME: " 
              << std::endl <<std::endl; 
    std::cout << extTime;
    std::cout << std::endl;
    std::cout << "PURCHASE TIME: " 
              << std::endl <<std::endl; 
    std::cout << receipet;
    std::cout << std::endl;

    return 0;
}
