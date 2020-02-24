#ifndef INVENTORY_H_
#define INVENTORY_H_

//Inventory Management System
namespace ims
{
class inventory
{
public:
    inventory();
    inventory(const inventory &otherObj);
    ~inventory();

    void populateInventory();
    void printReceipt();
    void printInventory();
    void purchase();

private:
    struct receipt
    {   
        //All Item Qty's (in-class initialization of non-static data member is a C++11 extension)
        int nikeShoesQty = 22;
        int armourQty = 33;
        int brooksQty = 11;
        int asicsQty = 20;
        int nikeShortsQty = 77;

        //All Item Prices (in-class initialization of non-static data member is a C++11 extension)
        float nikeShoesPrice = 145.99;
        float armourPrice = 29.99;
        float brooksPrice = 111.44;
        float asicsPrice = 165.88;
        float nikeShortsPrice = 45.77;
    };

    receipt *inv;
    int *toBuy;
    //should this be a pointer?
    const float SALES_TAX = 0.0825;
    static float total;
};
} // namespace ims

#endif