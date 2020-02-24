#include <iostream>
#include <iomanip>
#include "inventory.h"

//Inventory Management System
namespace ims
{

float inventory::total = 0.0;

inventory::inventory()
{
    inv = new receipt;
    toBuy = new int[5];
}

inventory::inventory(const inventory &otherObj)
{
    inv = new receipt;
    toBuy = new int[5];
    total = 0.0;

    for (int i = 0; i < 5; i++)
    {
        toBuy[i] = otherObj.toBuy[i];
    }
}

inventory::~inventory()
{
    delete[] inv;
    delete[] toBuy;
}

void inventory::printReceipt()
{
    std::cout << "~ RECEIPT~" << std::endl;

    for (int i = 0; i < 5; i++)
    {
        switch (i)
        {
        case 0:
            if (toBuy[0] != 0)
            {
                std::cout << "NIKE BASKETBALL SHOES:  " << toBuy[0] << "    $" << toBuy[0] * inv[0].nikeShoesPrice
                          << std::endl;
                total += toBuy[0] * inv[0].nikeShoesPrice;
            }
            break;
        case 1:
            if (toBuy[1] != 0)
            {
                std::cout << "UNDER ARMOUR T-SHIRTS:  " << toBuy[1] << "    $" << toBuy[1] * inv[0].armourPrice
                          << std::endl;
                total += toBuy[1] * inv[0].armourPrice;
            }
            break;
        case 2:
            if (toBuy[2] != 0)
            {
                std::cout << "BROOKS RUNNING SHOES:   " << toBuy[2] << "    $" << toBuy[2] * inv[0].brooksPrice
                          << std::endl;
                total += toBuy[2] * inv[0].brooksPrice;
            }
            break;
        case 3:
            if (toBuy[3] != 0)
            {
                std::cout << "ASICS RUNNING SHOES:    " << toBuy[3] << "    $" << toBuy[3] * inv[0].asicsPrice
                          << std::endl;
                total += toBuy[3] * inv[0].asicsPrice;
            }
            break;
        case 4:
            if (toBuy[4] != 0)
            {
                std::cout << "NIKE SHORTS:            " << toBuy[4] << "    $" << toBuy[4] * inv[0].nikeShortsPrice
                          << std::endl;
                total += toBuy[4] * inv[0].nikeShortsPrice;
            }
            break;
        }
    }
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "\nSUB TOTAL    :     $" << total << std::endl;
    std::cout << "TAX (8.25%)  :     $" << (total * SALES_TAX) << std::endl;
    std::cout << "\nTOTAL        :     $" << total + (total * SALES_TAX) << std::endl;
}

void inventory::printInventory()
{
    std::cout << "~CURRENT INVENTORY~"
              << std::endl
              << "NIKE BASKETBALL SHOES:  " << inv[0].nikeShoesQty
              << std::endl
              << "UNDER ARMOUR T-SHIRTS:  " << inv[0].armourQty
              << std::endl
              << "BROOKS RUNNING SHOES:   " << inv[0].brooksQty
              << std::endl
              << "ASICS RUNNING SHOES:    " << inv[0].asicsQty
              << std::endl
              << "NIKE SHORTS:            " << inv[0].nikeShortsQty
              << std::endl
              << std::endl;
}

void inventory::purchase()
{
    //print inventory before purchase
    system("clear");
    printInventory();

    //Mark's purchase
    toBuy[0] = 2;
    toBuy[1] = 3;
    toBuy[2] = 1;
    toBuy[4] = 4;

    inv[0].nikeShoesQty -= 2;
    inv[0].armourQty -= 3;
    inv[0].brooksQty -= 1;
    inv[0].nikeShortsQty -= 4;

    //print inventory after purchase
    printInventory();
}
} // namespace ims
