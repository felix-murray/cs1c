#include "inventory.h"
#include <iostream>

int main()
{
    ims::inventory myInv;

    myInv.purchase();
    myInv.printReceipt();

    std::cout << "\n\n";

    ims::inventory newInv(myInv);

    newInv.printInventory();

    return 0;
}