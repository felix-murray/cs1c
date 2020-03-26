#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
    public:
        using Shape::updateDimensions;
        using Shape::move;
        
        Rectangle() { }
        Rectangle (int l, int w) {length = l, width = w;}

        //override print
        void print();
        //override UpdateDimensions
        void updateDimensions(int l, int w) {length = l, width = w;}
        void move(int loc);
    private:
        int length;
        int width;
};

#endif