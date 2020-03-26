#include "shape.h"

class Rectangle : public Shape
{
    public:
        Rectangle() { }
        Rectangle (int l, int w) {length = l, width = w;}

        //override print
        void print();
        //override UpdateDimensions
        void updateDimensions(int l, int w) {length = l, width = w;}
    private:
        int length;
        int width;
};