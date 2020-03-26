#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
    public:
        using Shape::updateDimensions;
        
        Circle() { }
        Circle(int r) { radius = r; }

        //override print
        void print();
        //override UpdateDimensions
        void updateDimensions(int r) { radius = r;}
    private:
        int radius;
};

#endif