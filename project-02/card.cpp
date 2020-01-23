#include <iostream>
#include "card.h"

std::string card::getSuite()
{
    return suite;
}

std::string card::getRank()
{
    return rank;
}

int card::getSuiteVal()
{
    return suiteVal;
}

int card::getRankVal()
{
    return rankVal;
}

void card::setSuite(std::string initSuite)
{
    suite = initSuite;
}

void card::setRank(std::string initRank)
{
    rank = initRank;
}

void card::setSuiteVal(int initSuite)
{
    suiteVal = initSuite;

    switch (initSuite)
    {
    case 1:
        setSuite("CLUBS");
        break;
    case 2:
        setSuite("DIAMONDS");
        break;
    case 3:
        setSuite("HEARTS");
        break;
    case 4:
        setSuite("SPADES");
        break;
    }
}

void card::setRankVal(int initRank)
{
    rankVal = initRank;

    switch (initRank)
    {
    case 1:
        setRank("ACE");
        break;
    case 2:
        setRank("TWO");
        break;
    case 3:
        setRank("THREE");
        break;
    case 4:
        setRank("FOUR");
        break;
    case 5:
        setRank("FIVE");
        break;
    case 6:
        setRank("SIX");
        break;
    case 7:
        setRank("SEVEN");
        break;
    case 8:
        setRank("EIGHT");
        break;
    case 9:
        setRank("NINE");
        break;
    case 10:
        setRank("TEN");
        break;
    case 11:
        setRank("JACK");
        break;
    case 12:
        setRank("KING");
        break;
    case 13:
        setRank("QUEEN");
        break;
    }
}

void card::printCard()
{
    std::cout << getRank() << " of " << getSuite() << std::endl;
}

//Non-class Functions

void printDeck(card array[])
{
    for (int i = 0; i < 52; i++)
    {
        array[i].printCard();
    }
}

void makeDeck(card array[])
{
    int index;
    card temp;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 13; j++)
        {
            temp.setRankVal(j);
            temp.setSuiteVal(i);
            array[index] = temp;
            index++;
        }
    }

    std::cout << "Deck Created: "
              << "\n\n";
}

void shuffleDeck(card cards[])
{
    card temp;
    
    int i = 0;
    int j = 26;
    for (int x = 0; x < 52; x++)
    {
        temp.setRankVal(i);
        temp.setSuiteVal(i);

        cards[x] = temp;

        temp.setRankVal(j);
        temp.setSuiteVal(j);

        cards[x + 1] = temp;
        

        //shhhhh I didn't steal this
        //cards[x + 1].setInfo(copyCards[j].getSuit(), copyCards[j].getRank());
        //cards[x].setInfo(copyCards[i].getSuit(), copyCards[i].getRank());
        
        x++;
        i++;
        j++;
    }

    std::cout << "Deck Shuffled" << std::endl;
}