#include "shape.h"
#include "circle.h"
#include "rectangle.h"

int main()
{
    //make some shapes
    Rectangle myRect(5, 6);
    Circle myCirc(8);


    //test print
    myRect.print();
    myCirc.print();

    //test update dimensions
    myRect.updateDimensions(6, 7);
    myCirc.updateDimensions(4);

    //print to show difference
    myRect.print();
    myCirc.print();
    return 0;
}