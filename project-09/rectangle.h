#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
public:
    using Shape::calcArea;
    using Shape::calcPerimeter;

    Rectangle() {}
    Rectangle(int l, int w) { length = l, width = w; }

    //override UpdateDimensions
    double calcPerimeter() { return (length + width) * 2; }
    double calcArea() { return length * width; }

    friend void printRectanglePerimeter();
    friend void printRectangleArea();
private:
    int length;
    int width;
};

#endif