#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
    public:
        Shape() { } 
        Shape(int initX, int initY) { x = initX, y = initY;}

        void print();
        
        //add UpdateDimensions virtual function
        virtual void updateDimensions() { }
    private:
        int x; //x dimension
        int y; //y dimension
};

#endif