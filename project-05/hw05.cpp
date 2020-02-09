//--------------------------------------------------------------------------
//  Project name: HW05
//--------------------------------------------------------------------------
//  Creator's name and email: Felix Murray felix.murray@gmail.com
//  Course Selection: CS1C
//  Due Date: 2/11/2020
//--------------------------------------------------------------------------
//  Purpose: Demonstrate vectors using a lottery numbers function.
//--------------------------------------------------------------------------
//  Algorithm:
//      Step 1: Initialize input variables and integer vector. 
//      Step 2: Prompt the user for how many numbers possible will be 
//              randomly shuffled through in the lottery function.
//      Step 3: Prompt the user for how many numbers a winning combination 
//              for the lottery will be.
//      Step 4: Call lottery function and assign it to become the new value
//              of the previously created vector.
//      Step 5: Print winning numbers using print function.
//      Step 6: Program Exits.
//--------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <random>
#include <chrono>

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

void print(std::vector<int> const &a);
std::vector<int> lottery(int size, int selection);
void selectionSort(std::vector<int> &list);

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

    winners = lottery(numShuffle, numWinning);

    selectionSort(winners);
    print(winners);

    return 0;
}

/******************************************************************
 *
 * FUNCTION lottery
 *_________________________________________________________________
 * This function simulates a lottery by randomly shuffling a vector
 * of integer values and returning the winning numbers of as a 
 * vector. 
 *_________________________________________________________________
 * PRE-CONDITIONS
 * int size      : passed integer representing size of vector to
 *                 shuffle for the lottery.
 * int selection : passed integer representing number of values 
 *                 to make up the winning numbers list
 * POST-CONDITIONS 
 * This function simulates a lottery by randomly shuffling a vector
 * of integer values and returning the winning numbers of as a 
 * vector. 
 *
 **************************************s****************************/
std::vector<int> lottery(int size, int selection)
{
    std::vector<int> allValues;
    //second vector created to contain winning values
    std::vector<int> winningValues;
    /**
     *
     * Random seed for use in shuffle function created using
     * value of time since clock epoch (1/1/1970) till current
     * system time (when function is called).
     */
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    //random number engine used along with seed created to generate random values
    auto rng = std::default_random_engine(seed);

    for (int i = 0; i < size; ++i)
    {
        allValues.push_back(i);
    }
    /**
     * Use of STD function shuffle to shuffle vector 
     * using the generated random seen and
     * range of the entire vector.
     **/
    std::shuffle(std::begin(allValues), std::end(allValues), rng);

    //loop to select winning numbers based on passed parameters
    for (int i = 0; i < selection; ++i)
    {
        winningValues.push_back(allValues[i]);
    }

    return(winningValues);
}

/******************************************************************
 *
 * FUNCTION print
 *_________________________________________________________________
 * This function prints the winning numbers to the console.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * std::vector<int> const &a : passed vector to be accessed to print
 *                             winning numbers.
 * 
 * POST-CONDITIONS 
 * This function prints the winning numbers to the console.
 *
 **************************************s****************************/
void print(std::vector<int> const &a)
{
    system("clear");
    std::cout << "Your winning numbers are: ";

    for (int i = 0; i < a.size(); i++)
    {
        std::cout << a.at(i) << ' ';
    }
    std::cout << std::endl;   
}

/******************************************************************
 *
 * FUNCTION selectionSort
 *_________________________________________________________________
 * This function sorts the passed vector using the selection sort
 * algorithm.
 *_________________________________________________________________
 * PRE-CONDITIONS
 * std::vector<int> list  : passed vector to be sorted.
 * 
 * POST-CONDITIONS 
 * The passed array will be sorted in descending order.
 *      
 ******************************************************************/
void selectionSort(std::vector<int> &list) 
{
    for (int index = 0; index < list.size(); ++index)
    {
        int smallestIndex = index;

        for (int location = index + 1; location < list.size(); ++location)
        {   
            if (list[location] < list[smallestIndex])
            {
                smallestIndex = location;
            }
        }

        if (smallestIndex != index)
        {   
            std::swap(list[smallestIndex], list[index]);
        }
    }
}
