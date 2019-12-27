#include "card.h"
#include <iostream>
int main()
{
    system("clear");
    card cards[14];   

    card::makeDeck(cards);

    card::printDeck(cards);

    return 0;
}