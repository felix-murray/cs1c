#include <iostream>
#include "card.h"

/*--------  Accessor Functions  --------*/
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

/*--------  Mutator Functions  --------*/
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

    /**
     *
     * Switch statement used to relate suite value (int)
     * to suite (string).
     *
     */
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
    
    /**
     *
     * Switch statement used to relate rank value (int)
     * to rank (string).
     *
     */
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
        setRank("QUEEN");
        break;
    case 13:
        setRank("KING");
        break;
    }
}


/******************************************************************
 *
 * FUNCTION printCard
 *_________________________________________________________________
 * This function prints the object's rank and suite.       
 *_________________________________________________________________
 * PRE-CONDITIONS
 * n/a
 * 
 * POST-CONDITIONS 
 * This function prints the object's rank and suite.     
 *
 ******************************************************************/
void card::printCard()
{
    std::cout << getRank() << " of " << getSuite() << std::endl;
}


/*--------  Shuffle Functions  --------*/

/******************************************************************
 *
 * FUNCTION printDeck
 *_________________________________________________________________
 * This function prints the entire deck of cards.       
 *_________________________________________________________________
 * PRE-CONDITIONS
 * card arr[] : array of cards to print.
 * 
 * POST-CONDITIONS 
 * This function prints the entire deck of cards.  
 *
 ******************************************************************/
void printDeck(card arr[])
{
    for (int i = 0; i < 52; i++)
    {
        arr[i].printCard();
    }
}

/******************************************************************
 *
 * FUNCTION makeDeck
 *_________________________________________________________________
 * This function creates the entire deck of cards.       
 *_________________________________________________________________
 * PRE-CONDITIONS
 * card arr[] : array of cards to use to create the full deck.
 * 
 * POST-CONDITIONS 
 * This function creates the entire deck of cards. 
 *
 ******************************************************************/
void makeDeck(card arr[])
{
    int index;
    card temp;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 13; j++)
        {
            temp.setRankVal(j);
            temp.setSuiteVal(i);
            arr[index] = temp;
            index++;
        }
    }

    std::cout << "--------Deck Created--------" << std::endl;
}

/******************************************************************
 *
 * FUNCTION shuffleDeck
 *_________________________________________________________________
 * This function shuffles the entire deck of cards using a method
 * known as a "perfect shuffle".       
 *_________________________________________________________________
 * PRE-CONDITIONS
 * card arr[] : array of cards to use to create the full deck.
 * 
 * POST-CONDITIONS 
 * This function perfect shuffles the entire deck of cards once.
 *
 ******************************************************************/
void shuffleDeck(card arr[])
{
    card temp[52];

    for (int i = 0; i < 52; i++)
    {
        temp[i].setRankVal(arr[i].getRankVal());
        temp[i].setSuiteVal(arr[i].getSuiteVal());
    }
    
    int j = 0;
    for (int i = 0; i < 52; i = i + 2)
    {
        //First Half of Deck
        arr[i].setRankVal(temp[j].getRankVal());
        arr[i].setSuiteVal(temp[j].getSuiteVal());

        //Second Half of Deck
        arr[i + 1].setRankVal(temp[j + 26].getRankVal());
        arr[i + 1].setSuiteVal(temp[j + 26].getSuiteVal());
        
        j++;
    }

    std::cout << "--------Deck Shuffled--------" << std::endl;
}