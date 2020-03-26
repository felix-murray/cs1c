#include "shape.h"
#include "circle.h"
#include "rectangle.h"

int main()
{
    system("clear");
    //make some shapes
    Rectangle myRect(5, 6);
    Circle myCirc(8);


    //test print
    myRect.print();
    myCirc.print();

    //test update dimensions & move
    myRect.updateDimensions(6, 7);
    myRect.move(15);
    myCirc.updateDimensions(4);
    myCirc.move(25);

    //print to show difference
    myRect.print();
    myCirc.print();

    return 0;
}

/* Questions */

//Do we need to override Move for derived classes? Explain.

//What kind of binding is occurring for Print vs UpdateDimensions? 

//Explain the difference between static and dynamic binding, static and dynamic polymorphism?

