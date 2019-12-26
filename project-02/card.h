#ifndef CARD_H_
#define CARD_H_

#include <string>

enum Suite
{
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
};

enum Rank
{
    ACE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    KING,
    QUEEN
};

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

class card 
{
    public:
        Suite getSuite();
        Rank getRank();
        void setSuite(Suite initSuite);
        void setRank(Rank initSuite);

        static void makeSection(card deck[], Suite toMake, int &index);
        static void makeDeck(card deck[]);
        // void shuffle();
        // void perfectShuffle();
        static void printDeck(card deck[]);

        
    private:
        Suite suite;
        Rank rank;
};

#endif