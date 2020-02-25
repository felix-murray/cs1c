#include <iostream>
#include <iomanip>
#include "inventory.h"

//Inventory Management System
namespace ims
{

/* Assignment of Namespace Variables */  

/* Item Stock Qtys */
int nikeShoesQty = 22;
int armourQty = 33;
int brooksQty = 11;
int asicsQty = 20;
int nikeShortsQty = 77;

/* Item Prices */
float nikeShoesPrice = 145.99;
float armourPrice = 29.99;
float brooksPrice = 111.44;
float asicsPrice = 165.88;
float nikeShortsPrice = 45.77;

/* Static Variable Assignment */
float inventory::total = 0.0;

/* Constant Variable Declarations */
const float SALES_TAX = 0.0825;
const int NUM_PRODUCTS = 5;


/*********  Default Constructor  **********/
inventory::inventory()
{
    toBuy = new int[NUM_PRODUCTS];
}

/*********  Copy Constructor  **********/
inventory::inventory(const inventory &otherObj)
{
    toBuy = new int[NUM_PRODUCTS];
    total = 0.0;

    for (int i = 0; i < NUM_PRODUCTS; i++)
    {
        toBuy[i] = otherObj.toBuy[i];
    }
}

/*********  Destructor  **********/
inventory::~inventory()
{
    delete[] toBuy;
}

/*********  Methods  **********/
/******************************************************************
 *
 * FUNCTION printReceipt
 *_________________________________________________________________
 * This function prints the results of Mark's purchase, displaying
 * only the items he purchased, the quantity of each, and the price
 * for each item(s) and the subtotal (without tax) and total (with
 * tax).
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * 
 * POST-CONDITIONS 
 * This function prints the results of Mark's purchase, displaying
 * only the items he purchased, the quantity of each, and the price
 * for each item(s) and the subtotal (without tax) and total (with
 * tax).
 *
 ******************************************************************/
void inventory::printReceipt()
{
    std::cout << "~ RECEIPT~" << std::endl;

    for (int i = 0; i < NUM_PRODUCTS; i++)
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

/******************************************************************
 *
 * FUNCTION printInventory
 *_________________________________________________________________
 * This function prints the inventory of items to the console.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * 
 * POST-CONDITIONS 
 * This function prints the inventory of items to the console.
 *
 ******************************************************************/
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

/******************************************************************
 *
 * FUNCTION purchase
 *_________________________________________________________________
 * This function runs Mark's purchase as per the assignment 
 * instructions.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * 
 * POST-CONDITIONS 
 * This function edits the stock values of the dynamic array to 
 * then edit the namespace variables to reflect the change in stock
 * after the purchase is made.
 ******************************************************************/
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
