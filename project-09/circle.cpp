#include <iostream>
#include "circle.h"

void Circle::print()
{
    Shape::print();
    std::cout << "Circle" << std::endl;
    std::cout << "Radius: " << radius << "\n\n";
}

void Circle::move(int loc)
{
    std::cout << "Moved to location: "
              << loc << "\n\n";
}