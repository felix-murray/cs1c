#ifndef INVOICE_H_
#define INVOICE_H_

#include <string>
#include "time.h"

class Invoice : public Time
{
    public:
        Invoice();
        Invoice(int initHours, int initMinutes, int initSeconds);
        void printInvoice() const;
        friend std::ostream& operator<<(std::ostream& os, Invoice const& obj);
    private:
        Time purchase_time;
};

#endif
