#include <random>
#include <vector>
#include <iostream>
#include <chrono>

std::vector<int> Lotto(int spots, int selection)
{
    std::vector<int> allValues;
    std::vector<int> winningValues;
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    auto rng = std::default_random_engine(seed);

    for (int i = 0; i < spots; ++i)
    {
        allValues.push_back(i);
    }
    
    std::shuffle(std::begin(allValues), std::end(allValues), rng);

    for (int i = 0; i < selection; ++i)
    {
        winningValues.push_back(allValues[i]);
    }

    return(winningValues);
}

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
