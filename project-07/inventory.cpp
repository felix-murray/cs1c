#include <iostream>
#include <iomanip>
#include "inventory.h"

//Inventory Management System
namespace ims
{
//assignment of namespace variables    
int nikeShoesQty = 22;
int armourQty = 33;
int brooksQty = 11;
int asicsQty = 20;
int nikeShortsQty = 77;

float nikeShoesPrice = 145.99;
float armourPrice = 29.99;
float brooksPrice = 111.44;
float asicsPrice = 165.88;
float nikeShortsPrice = 45.77;

//static variable assignment
float inventory::total = 0.0;

inventory::inventory()
{
    toBuy = new int[5];
}

inventory::inventory(const inventory &otherObj)
{
    toBuy = new int[5];
    total = 0.0;

    for (int i = 0; i < 5; i++)
    {
        toBuy[i] = otherObj.toBuy[i];
    }
}

inventory::~inventory()
{
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
                std::cout << "NIKE BASKETBALL SHOES:  " << toBuy[0] << "    $" << toBuy[0] * ims::nikeShoesPrice
                          << std::endl;
                total += toBuy[0] * ims::nikeShoesPrice;
            }
            break;
        case 1:
            if (toBuy[1] != 0)
            {
                std::cout << "UNDER ARMOUR T-SHIRTS:  " << toBuy[1] << "    $" << toBuy[1] * ims::armourPrice
                          << std::endl;
                total += toBuy[1] * ims::armourPrice;
            }
            break;
        case 2:
            if (toBuy[2] != 0)
            {
                std::cout << "BROOKS RUNNING SHOES:   " << toBuy[2] << "    $" << toBuy[2] * ims::brooksPrice
                          << std::endl;
                total += toBuy[2] * ims::brooksPrice;
            }
            break;
        case 3:
            if (toBuy[3] != 0)
            {
                std::cout << "ASICS RUNNING SHOES:    " << toBuy[3] << "    $" << toBuy[3] * ims::asicsPrice
                          << std::endl;
                total += toBuy[3] * ims::asicsPrice;
            }
            break;
        case 4:
            if (toBuy[4] != 0)
            {
                std::cout << "NIKE SHORTS:            " << toBuy[4] << "    $" << toBuy[4] * ims::nikeShortsPrice
                          << std::endl;
                total += toBuy[4] * ims::nikeShortsPrice;
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
              << "NIKE BASKETBALL SHOES:  " << ims::nikeShoesQty
              << std::endl
              << "UNDER ARMOUR T-SHIRTS:  " << ims::armourQty
              << std::endl
              << "BROOKS RUNNING SHOES:   " << ims::brooksQty
              << std::endl
              << "ASICS RUNNING SHOES:    " << ims::asicsQty
              << std::endl
              << "NIKE SHORTS:            " << ims::nikeShortsQty
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

    ims::nikeShoesQty -= 2;
    ims::armourQty -= 3;
    ims::brooksQty -= 1;
    ims::nikeShortsQty -= 4;

    //print inventory after purchase
    printInventory();
}
} // namespace ims
