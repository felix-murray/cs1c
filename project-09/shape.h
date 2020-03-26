#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
    Shape() {}
    Shape(int initX, int initY) { x = initX, y = initY; }

    virtual double calcPerimeter() { } 
    virtual double calcArea() { }
private:
    int x; //x dimension
    int y; //y dimension
};

#endif