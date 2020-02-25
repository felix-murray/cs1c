//--------------------------------------------------------------------------
//  Project name: HW07
//--------------------------------------------------------------------------
//  Creator's name and email: Felix Murray felix.murray@gmail.com
//  Course Selection: CS1C
//  Due Date: 2/25/2020
//--------------------------------------------------------------------------
//  Purpose: Simulate an inventory using an object, namespace, and dynamic
//           memory.
//--------------------------------------------------------------------------
//  Algorithm:
//      Step 1: Create inventory object using default constructor.
//      Step 2: Call purchase method to run Mark's purchase and printReciept
//              to show his total (with tax)
//      Step 3: Use object copy constructor to create a new object with the 
//              same data as first created object.
//      Step 4: Print inventory of new object to prove data copied properly.
//      Step 5: Program Exits.
//--------------------------------------------------------------------------
#include "inventory.h"
#include <iostream>

int main()
{
    ims::inventory myInv;

    myInv.purchase();
    std::cout << "Making Mark's Purchase...\n\n";
    myInv.printReceipt();

    std::cout << "\n\n";

    std::cout << "Calling Copy Constructor...\n";
    std::cout << "Printing New Object Inventory...\n\n";

    ims::inventory newInv(myInv);

    newInv.printInventory();

    return 0;
}