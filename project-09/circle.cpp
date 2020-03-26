#include <iostream>
#include "circle.h"

void Circle::print()
{
    Shape::print();
    std::cout << "Radius: " << radius;
}