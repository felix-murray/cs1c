#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"
#include <cmath>

class Triangle : public Shape
{
public:
    using Shape::calcArea;
    using Shape::calcPerimeter;

    Triangle() {}
    Triangle(int s) { side = s; }

    double calcPerimeter() { return side * 3; }
    double calcArea() { return ((sqrt(3) / 4) * (side * side)); }

    friend void printPerimeter();
    friend void printArea();
private:
    int side;
};

#endif