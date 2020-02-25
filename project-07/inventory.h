#ifndef INVENTORY_H_
#define INVENTORY_H_

//Inventory Management System
namespace ims
{
//declaration of namespace variables
extern int nikeShoesQty;
extern int armourQty;
extern int brooksQty;
extern int asicsQty;
extern int nikeShortsQty;

extern float nikeShoesPrice;
extern float armourPrice;
extern float brooksPrice;
extern float asicsPrice;
extern float nikeShortsPrice;

class inventory
{
public:
    /*********  Default Constructor  **********/
    inventory();
    /*********  Copy Constructor  **********/
    inventory(const inventory &otherObj);
    /*********  Destructor  **********/
    ~inventory();

    /*********  Methods  **********/
    void populateInventory();
    void printReceipt();
    void printInventory();
    void purchase();
private:
    int *toBuy;
    static float total;
};
} // namespace ims

#endif