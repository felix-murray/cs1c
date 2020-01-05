#include <iostream>
#include <vector>
#include "funtions.h"

/*******************************************
1. What is the STL? What is a vector?
    The STL refers to the Standard Template Library, a C++ library included in 
    ANSI/ISO Standard C++ which provides built-in templates for containers, 
    iterators, and algorithms.
    
    A vector is a sequence container which stores and manages objects 
    in a dynamic array.
2. Which vector operations change the size of a vector after its construction? 
    vecList.clear();
    vecList.erase(position);
    vecList.erase(beg, end);
    vecList.insert(position, elem);
    vecList.insert(position, beg, end);
    vecList.push_back(elem);
    vecList.pop_back();
    vecList.resize(num)
    vecList.resize(num, elem);
3. What is the STL array container and how does it differ from the built- in array and from a vector? 
    Compared to the built in array data structure and vectors, 
    the STL array container has member functions:
    front()
    back()
    fill()
    swap()
    empty()
    size()
    max_size()
    begin()
    end()
4. How does the vector member function resize() differ from reserve()? 
    resize() inserts or deletes the appropriate number of elements to the vector to make it the given size. 
    It will affect the size() and you can directly access them.
    reserve() only allocates memory, leaving it uninitialized. 
    It only affects capacity(); size() will not be changed.
5. What should begin() and end() do for a container? 
    Return an iterator to the first element. 
    Return an iterator to the position after the last element.
6. Give an example of using the vector push_back() modifier. 
    vector<int> intList; 
    intList.push_back(13);
*******************************************/

int main ()
{
    int numShuffle;
    int numWinning;
    std::vector<int> winners;

    system("clear");
    std::cout << "Enter the number of elements to shuffle: ";
    std::cin >> numShuffle;

    std::cout << std::endl;

    std::cout << "Enter the number of winning numbers: ";
    std::cin >> numWinning;

    winners = Lotto(numShuffle, numWinning);

    print(winners);

    return 0;
}
