#include <iostream>
#include "card.h"

Suite card::getSuite()
{
    return suite;
}

Rank card::getRank()
{
    return rank;
}

void card::setSuite(Suite initSuite)
{
    suite = initSuite;
}

void card::setRank(Rank initRank)
{
    rank = initRank;
}

void card::printDeck(card deck[])
{
    for (int i = 0; i < 52; i++)
    {
        std::cout << deck[i].getRank() << " of " << deck[i].getSuite() << std::endl;
    }
}

void card::makeSection(card deck[], Suite toMake, int &index)
{
    card temp; 
    int tempIndex = index + 13;
    Rank i = ACE;

    while (i < tempIndex)
    {
        temp.setRank(i);
        temp.setSuite(toMake);
        deck[index] = temp;
        i++;
    }
    index += 13;
    card::printDeck(deck);
}

void card::makeDeck(card deck[])
{
    int index = 0;

    std::cout << "CLUBS" << std::endl;
    card::makeSection(deck, CLUBS, index);
    card::makeSection(deck, HEARTS, index);
    card::makeSection(deck, SPADES, index);
    card::makeSection(deck, DIAMONDS, index);
}

// void shuffle();
// void perfectShuffle();