#include "card.h"
#include <iostream>

int main()
{
    system("clear");

    card myDeck[52];
    makeDeck(myDeck);

    shuffleDeck(myDeck);
    printDeck(myDeck);
    
    return 0;
}