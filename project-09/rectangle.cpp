#include <iostream>
#include "rectangle.h"

void Rectangle::print()
{
    Shape::print();
    std::cout << "Rectangle" << std::endl;
    std::cout << "Length: " << length << std::endl;
    std::cout << "Width: " << width << "\n\n";
}

void Rectangle::move(int loc)
{
    std::cout << "Moved to location: "
              << loc << "\n\n";
}
