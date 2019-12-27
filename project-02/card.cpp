#include <iostream>
#include "card.h"

Rank& operator++(Rank& orig)
{
  orig = static_cast<Rank>(orig + 1); // static_cast required because enum + int -> int
  return orig;
}

Rank operator++(Rank& orig, int)
{
  Rank rVal = orig;
  ++orig;
  return rVal;
}

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
    for (int i = 0; i < 13; i++)
    {
        switch(i)
        {
            case 0:
                std::cout << "Suite is: " << deck[i].getSuite() << std::endl;
                std::cout << "Rank is: " << i << std::endl;
                switch(deck[i].getSuite())
                {
                    
                    case 0:
                        std::cout << "ACE" << " of " << "CLUBS" << std::endl;
                        break;
                    case 1:
                        std::cout << "ACE" << " of " << "DIAMONDS" << std::endl;
                        break;
                    case 2:
                        std::cout << "ACE" << " of " << "HEARTS" << std::endl;
                        break;
                    case 3:
                        std::cout << "ACE" << " of " << "SPADES" << std::endl;
                        break;
                }
                break;
            case 1:
                std::cout << "Suite is: " << deck[i].getSuite() << std::endl;
                std::cout << "Rank is: " << i << std::endl;
                switch(deck[i].getSuite())
                {
                    case 0:
                        std::cout << "TWO" << " of " << "CLUBS" << std::endl;
                        break;
                    case 1:
                        std::cout << "TWO" << " of " << "DIAMONDS" << std::endl;
                        break;
                    case 2:
                        std::cout << "TWO" << " of " << "HEARTS" << std::endl;
                        break;
                    case 3:
                        std::cout << "TWO" << " of " << "SPADES" << std::endl;
                        break;
                }
                break;
            case 2:
                switch(deck[i].getSuite())
                {
                    case 0:
                        std::cout << "THREE" << " of " << "CLUBS" << std::endl;
                        break;
                    case 1:
                        std::cout << "THREE" << " of " << "DIAMONDS" << std::endl;
                        break;
                    case 2:
                        std::cout << "THREE" << " of " << "HEARTS" << std::endl;
                        break;
                    case 3:
                        std::cout << "THREE" << " of " << "SPADES" << std::endl;
                        break;
                }
                break;
            case 3:
                switch(deck[i].getSuite())
                {
                    case 0:
                        std::cout << "FOUR" << " of " << "CLUBS" << std::endl;
                        break;
                    case 1:
                        std::cout << "FOUR" << " of " << "DIAMONDS" << std::endl;
                        break;
                    case 2:
                        std::cout << "FOUR" << " of " << "HEARTS" << std::endl;
                        break;
                    case 3:
                        std::cout << "FOUR" << " of " << "SPADES" << std::endl;
                        break;
                }
                break;
            case 4:
                switch(deck[i].getSuite())
                {
                    case 0:
                        std::cout << "FIVE" << " of " << "CLUBS" << std::endl;
                        break;
                    case 1:
                        std::cout << "FIVE" << " of " << "DIAMONDS" << std::endl;
                        break;
                    case 2:
                        std::cout << "FIVE" << " of " << "HEARTS" << std::endl;
                        break;
                    case 3:
                        std::cout << "FIVE" << " of " << "SPADES" << std::endl;
                        break;
                }
                break;
            case 5:
                switch(deck[i].getSuite())
                {
                    case 0:
                        std::cout << "SIX" << " of " << "CLUBS" << std::endl;
                        break;
                    case 1:
                        std::cout << "SIX" << " of " << "DIAMONDS" << std::endl;
                        break;
                    case 2:
                        std::cout << "SIX" << " of " << "HEARTS" << std::endl;
                        break;
                    case 3:
                        std::cout << "SIX" << " of " << "SPADES" << std::endl;
                        break;
                }
                break;
            case 6:
                switch(deck[i].getSuite())
                {
                    case 0:
                        std::cout << "SEVEN" << " of " << "CLUBS" << std::endl;
                        break;
                    case 1:
                        std::cout << "SEVEN" << " of " << "DIAMONDS" << std::endl;
                        break;
                    case 2:
                        std::cout << "SEVEN" << " of " << "HEARTS" << std::endl;
                        break;
                    case 3:
                        std::cout << "SEVEN" << " of " << "SPADES" << std::endl;
                        break;
                }
                break;
            case 7:
                switch(deck[i].getSuite())
                {
                    case 0:
                        std::cout << "EIGHT" << " of " << "CLUBS" << std::endl;
                        break;
                    case 1:
                        std::cout << "EIGHT" << " of " << "DIAMONDS" << std::endl;
                        break;
                    case 2:
                        std::cout << "EIGHT" << " of " << "HEARTS" << std::endl;
                        break;
                    case 3:
                        std::cout << "EIGHT" << " of " << "SPADES" << std::endl;
                        break;
                }
                break;
            case 8:
                switch(deck[i].getSuite())
                {
                    case 0:
                        std::cout << "NINE" << " of " << "CLUBS" << std::endl;
                        break;
                    case 1:
                        std::cout << "NINE" << " of " << "DIAMONDS" << std::endl;
                        break;
                    case 2:
                        std::cout << "NINE" << " of " << "HEARTS" << std::endl;
                        break;
                    case 3:
                        std::cout << "NINE" << " of " << "SPADES" << std::endl;
                        break;
                }
                break;
            case 9:
                switch(deck[i].getSuite())
                {
                    case 0:
                        std::cout << "TEN" << " of " << "CLUBS" << std::endl;
                        break;
                    case 1:
                        std::cout << "TEN" << " of " << "DIAMONDS" << std::endl;
                        break;
                    case 2:
                        std::cout << "TEN" << " of " << "HEARTS" << std::endl;
                        break;
                    case 3:
                        std::cout << "TEN" << " of " << "SPADES" << std::endl;
                        break;
                }
                break;
            case 10:
                switch(deck[i].getSuite())
                {
                    case 0:
                        std::cout << "JACK" << " of " << "CLUBS" << std::endl;
                        break;
                    case 1:
                        std::cout << "JACK" << " of " << "DIAMONDS" << std::endl;
                        break;
                    case 2:
                        std::cout << "JACK" << " of " << "HEARTS" << std::endl;
                        break;
                    case 3:
                        std::cout << "JACK" << " of " << "SPADES" << std::endl;
                        break;
                }
                break;
            case 11:
                switch(deck[i].getSuite())
                {
                    case 0:
                        std::cout << "KING" << " of " << "CLUBS" << std::endl;
                        break;
                    case 1:
                        std::cout << "KING" << " of " << "DIAMONDS" << std::endl;
                        break;
                    case 2:
                        std::cout << "KING" << " of " << "HEARTS" << std::endl;
                        break;
                    case 3:
                        std::cout << "KING" << " of " << "SPADES" << std::endl;
                        break;
                }
                break;
            case 12:
                switch(deck[i].getSuite())
                {
                    case 0:
                        std::cout << "QUEEN" << " of " << "CLUBS" << std::endl;
                        break;
                    case 1:
                        std::cout << "QUEEN" << " of " << "DIAMONDS" << std::endl;
                        break;
                    case 2:
                        std::cout << "QUEEN" << " of " << "HEARTS" << std::endl;
                        break;
                    case 3:
                        std::cout << "QUEEN" << " of " << "SPADES" << std::endl;
                        break;
                }
                break;
        }
    }
}

void card::makeSection(card deck[], Suite toMake, int &index)
{
    card temp; 
    int tempIndex = index + 13;
    int i = 0;
    Rank currentRank = ACE;

    while (i < tempIndex)
    {
        
        temp.setRank(currentRank);
        temp.setSuite(toMake);
        std::cout << "(Make Section) Suite is: " << temp.getSuite() << std::endl;
        std::cout << "(Make Section) Rank is: " << temp.getRank() << std::endl;

        deck[index] = temp;
        i++;
        currentRank++;
    }
    index += 13;
}

void card::makeDeck(card deck[])
{
    int index = 0;

    //card::makeSection(deck, CLUBS, index);
    //card::makeSection(deck, HEARTS, index);
    card::makeSection(deck, SPADES, index);
    // card::makeSection(deck, DIAMONDS, index);
}

// void shuffle();
// void perfectShuffle();