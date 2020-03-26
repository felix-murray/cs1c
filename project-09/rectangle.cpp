#include <iostream>
#include "rectangle.h"

void Rectangle::print()
{
    Shape::print();
    std::cout << "Shape: Rectangle" << std::endl;
    std::cout << "Length: " << length << std::endl;
    std::cout << "Width: " << width << std::endl;
}