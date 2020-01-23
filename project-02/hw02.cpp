//--------------------------------------------------------------------------
//  Project name: HW02
//--------------------------------------------------------------------------
//  Creator's name and email: Felix Murray felix.murray@gmail.com
//  Course Selection: CS1C
//  Due Date: 1/23/2020
//--------------------------------------------------------------------------
//  Purpose: Simulates a standard 52 deck of cards and demonstrates a 
//           perfect shuffle. 
//--------------------------------------------------------------------------
//  Algorithm:
//      Step 1: Clear console and initialize deck of cards array.
//      Step 2: Initialize deck of cards.
//      Step 3: Print deck of cards.
//      Step 4: Shuffle deck of cards.
//      Step 5: Print to show changes.
//      Step 6: Shuffle deck until it reaches original state.
//      Step 7: Print to show final deck and number of shuffles to reset.
//      Step 8: Exit.
//--------------------------------------------------------------------------

#include "card.h"
#include <iostream>

int main()
{
    system("clear");

    card myDeck[52];

    makeDeck(myDeck);

    std::cout << "--------Printing Initial Deck--------" << std::endl;
    printDeck(myDeck);
    shuffleDeck(myDeck);
    std::cout << "--------Printing 1 Perfect Shuffle--------" << std::endl;
    printDeck(myDeck);
    
    for (int i = 0; i < 7; i++)
    {
        shuffleDeck(myDeck);
    }

    std::cout << "--------Printing Final Deck--------" << std::endl;
    printDeck(myDeck);

    std::cout << "\nIt took 8 total perfect shuffles to return the deck to it's original state." << std::endl;
    
    return 0;
}

