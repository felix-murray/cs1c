#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "triangle.h"

template <class polygonType>
polygonType printPerimeter(polygonType &obj)
{
    std::cout << "Perimeter: " << obj.calcPerimeter()
              << std::endl;
}

template <class polygonType>
polygonType printArea(polygonType &obj)
{
    std::cout << "Area: " << obj.calcArea()
              << std::endl;
}

int main()
{
    system("clear");

    //Instantiate a Rectangle and a Triangle object.
    Rectangle myRect(2, 3);
    Triangle myTrig(5);

    //Call the functions printPerimeter and printArea & output results

    std::cout << "~Rectangle~" << std::endl;
    printPerimeter(myRect);
    printArea(myRect);
    std::cout << "\n\n";
    
    std::cout << "~Triangle~" << std::endl;
    printPerimeter(myTrig);
    printArea(myTrig);

    return 0;
}