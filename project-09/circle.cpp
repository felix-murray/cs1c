#include <iostream>
#include "circle.h"

void Circle::print()
{
    Shape::print();
    std::cout << "Shape: Circle" << std::endl;
    std::cout << "Radius: " << radius << "\n\n";
}