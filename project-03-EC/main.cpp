#include <iostream>
#include "time.h"
#include "extendedTime.h"
#include "invoice.h"

int main ()
{
    system("clear");
    ExtendedTime test (2, 54, 3, PACIFIC);
    Invoice receipet(12,8,56);

    std::cout << test;
    std::cout << std::endl;
    std::cout << receipet;
    std::cout << std::endl;

    return 0;
}
