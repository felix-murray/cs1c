#include <iostream>
#include <vector>
#include "funtions.h"

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