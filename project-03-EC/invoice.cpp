#include "time.h"
#include "invoice.h"

Invoice::Invoice()
{
    purchase_time.setTime(-1, -1, -1);
}

Invoice::Invoice(int initHours, int initMinutes, int initSeconds)
{
    purchase_time.setTime(initHours, initMinutes, initSeconds);
}

void Invoice::printInvoice() const
{
    purchase_time.printTime();
}

std::ostream& operator<<(std::ostream& os, Invoice const& obj){
    obj.printInvoice();
    return os;
}