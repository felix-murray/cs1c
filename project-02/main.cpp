#include "card.h"
#include <iostream>
int main()
{
    system("clear");
    card cards[52];   

    card::makeDeck(cards);

    card::printDeck(cards);

    return 0;
}