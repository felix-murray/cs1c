// hw10.cpp
// to illustrate copy & move constructors, assignment operators

/*************************************************************************
 * AUTHOR     : Felix Murray
 * Lab #6     : copy & move constructors, assignment operators
 * CLASS      : CS 1C
 * SECTION    : TTH 12:30-2:50
*************************************************************************/

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

// file hw10.h

namespace hw10
{

//--Q#1,2,3,4-------------------------------------------------------------------

// a basic implementation of our stl like vector class
// basic vector is a fixed size array of doubles

class vector
{
    int vsize;
    double *elem;
    void copy(const vector &source); // copy elements from source into *elem
public:
    vector(int s) : vsize{s}, elem{new double[s]} {} // constructor
    vector(const vector &);                          // copy constructor: defines the copy operation
    vector(vector &&);                               // move constructor: defines the move operation
    ~vector() { delete[] elem; }                     // destructor

    int size() const { return vsize; } // the current size

    double get(int n) { return elem[n]; }      // access: read
    void set(int n, double v) { elem[n] = v; } // access: write

    vector &operator=(const vector &); // copy assignment
    vector &operator=(vector &&);      // move assignment
};

//------------------------------------------------------------------------------

} // namespace hw10

//------------------------------------------------------------------------------

// class member function, function definitions go into hw10.cpp:

// hw10.cpp

namespace hw10
{

// member function definitions:

//------------------------------------------------------------------------------

void vector::copy(const vector &source)
// copy elements 0 to original.vsize-1
{
    for (int i = 0; i < source.vsize; ++i)
        elem[i] = source.elem[i];
}

//--Q#1-------------------------------------------------------------------------

vector::vector(const vector &source) // copy constructor
    // allocate elements, then initialize them via copy operation
{
    elem = new double[source.vsize];
    copy(source); // use class defined copy operation
}

//--Q#3-------------------------------------------------------------------------

vector::vector(vector &&source) // move constructor
                                // copy source elem and vsize only, no need for copy operation
{
    vsize = source.vsize;
    copy(source);

    delete[] source.elem; // now that source vector contents have been moved, empty the vector
}

//--Q#2-------------------------------------------------------------------------

vector &vector::operator=(const vector &rhs) // copy assignment
    // make this vector a copy of the rhs (i.e. source)
{
    double *pD = new double[rhs.vsize];            // allocate new space for double[]
    std::copy(rhs.elem, rhs.elem + rhs.vsize, pD); // use std::copy algorithm to copy rhs elements into pD double[]
    delete[] elem;                                 // deallocate old space
    elem = pD;                                     // now that we've copied new, deallocated old elems, reset elem pointer
    vsize = 0;    // reset vector size
    return *this; // return a self-reference
}

//--Q#4-------------------------------------------------------------------------

vector &vector::operator=(vector &&rhs) // move assignment
                                        // move rhs (i.e. source) to this vector
{
    delete [] elem;               // deallocate old space
    copy(rhs);                // copy rhs’s elements and size, move implies copying element pointer only
    delete [] rhs.elem;                // empty the rhs vector
    return *this; // return a self-reference
}

//------------------------------------------------------------------------------

// function definitions:

//--Q#5-------------------------------------------------------------------------

vector fill_doubles(istream &is, int size)
{
    vector temp{size}; // instantiate temp vector
    for (int i = 0; i < size; i++)
    {
        double x;
        is >> x; // store double from input stream in vector
        temp.set(i, x);
    }
    return temp; // return temp by value, move constructor invoked
}

//------------------------------------------------------------------------------

ostream &print(ostream &os, vector &v)
// print vector element values to the output stream
{
    for (int i = 0; i < v.size(); ++i)
        os << v.get(i) << " ";
    return os;
}

//------------------------------------------------------------------------------

} // namespace hw10

//------------------------------------------------------------------------------

using namespace hw10;

int main()
{
    // console header
    cout << endl;
    cout << "************************************** " << endl;
    cout << "*           Running HW10             * " << endl;
    cout << "*      Programmed by Felix Murray    * " << endl;
    cout << "*      CS1C TTH 12:30-2:50           * " << endl;
    cout << "************************************** " << endl;
    cout << endl;

    // Q#1,2 - vector copy constructor and assignment operatior

    vector v{3};     // define a vector
    v.set(1, 100.5); // set v[1] to 100.5

    vector v2 = v; // [1.1] copy v to v2: what happens here?
    /**
     *
     * Nothing happens, as v2 does not have a defined size.
     *
     */
    v2.set(0, 25); // set v2[0] to 25
    
    cout << "v  double values: ";
    print(cout, v);
    cout << endl;
    cout << "v2 double values (after copy, set): ";
    print(cout, v2);
    cout << endl
         << endl;

    vector v3{3};
    vector v4{4};
    v3.set(2, 3.3);
    v4.set(2, 4.4);

    cout << "v3 double values: ";
    print(cout, v3);
    cout << endl;
    cout << "v4 double values: ";
    print(cout, v4);
    cout << endl;

    v3 = v4; // [2.1] assign v4 to v3: what happens here?
    /**
     *
     * Nothing happens, as the size assignment is over the limit.
     *
     */

    cout << "v3 double values (after assignment): ";
    print(cout, v3);
    cout << endl
         << endl;

    vector v5{10};
    v5 = v5; // [2.2] self assignment: what happens here, any problems?
     /**
     *
     * The operation works, however the compiler does throw warnings.
     *
     */

    // Q#5 - move assignment

    cout << "fill up v6 with five doubles" << endl;
    vector v6 = fill_doubles(cin, 5); // temp vector in function scope moved to v6
    cout << "v6 double values: ";
    print(cout, v6);
    cout << endl;

    return 0;
}

//------------------------------------------------------------------------------

// WRITTEN ANSWERS

// add written answers here ... Q#5

/**
 *
 * 1. What is the difference between a copy and move operation?
 * 
 *  Copy operations will copy the contents of an object to another instance of an object. 
 *  Move operations will delete the old instance of an object and move it to another instance of an object.
 *
 * 2. What happens when the temp vector (in function scope) is returned (by value) 
 * from the fill_doublesfunction and assigned to v6 in main? 
 * 
 * The contents of the temp vector are put into v6.
 * 
 * 3. Is the copy or move constructor invoked? 
 * 
 * The move constructor is called, as the object is passed by value.
 * 
 * 4. How does this result in improved performance?
 * 
 *    Performance is improved as no additional memory is created.
 */
