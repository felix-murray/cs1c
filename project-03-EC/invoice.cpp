#include "time.h"
#include "invoice.h"


/*********  Constructors  **********/

/* Default Constructor */
Invoice::Invoice()
{
    purchase_time.setTime(-1, -1, -1);
}

/* Super Constructor */
Invoice::Invoice(int initHours, int initMinutes, int initSeconds)
{
    purchase_time.setTime(initHours, initMinutes, initSeconds);
}

/******************************************************************
 *
 * FUNCTION printInvoice
 *_________________________________________________________________
 * This function prints the purchase time using the extendedTime
 * print method.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * POST-CONDITIONS 
 * This function prints the purchase time using the extendedTime
 * print method.
 *
 ******************************************************************/
void Invoice::printInvoice() const
{
    purchase_time.printTime();
}

/* Operator "<<" Overload */
std::ostream& operator<<(std::ostream& os, Invoice const& obj){
    obj.printInvoice();
    return os;
}