#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
    public:
        using Shape::updateDimensions;
        using Shape::move;

        Circle() { }
        Circle(int r) { radius = r; }

        //override print
        void print();
        //override UpdateDimensions
        void updateDimensions(int r) { radius = r;}
        void move(int loc);
    private:
        int radius;
};

#endif