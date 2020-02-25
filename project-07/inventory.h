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
    inventory();
    inventory(const inventory &otherObj);
    ~inventory();

    void populateInventory();
    void printReceipt();
    void printInventory();
    void purchase();

private:
    int *toBuy;
    const float SALES_TAX = 0.0825;
    static float total;
};
} // namespace ims

#endif