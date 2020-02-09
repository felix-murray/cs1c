#include <random>
#include <vector>
#include <iostream>
#include <chrono>

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
