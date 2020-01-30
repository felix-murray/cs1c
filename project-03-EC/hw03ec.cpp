#include <iostream>
#include "time.h"
#include "extendedTime.h"
#include "invoice.h"

int main ()
{
    system("clear");
    ExtendedTime extTime (2, 54, 3, PACIFIC);
    Invoice receipet(12, 8, 56);

    std::cout << "EXTENDED TIME: " 
              << std::endl <<std::endl; 
    std::cout << extTime;
    std::cout << std::endl;
    std::cout << "PURCHASE TIME: " 
              << std::endl <<std::endl; 
    std::cout << receipet;
    std::cout << std::endl;

    return 0;
}
