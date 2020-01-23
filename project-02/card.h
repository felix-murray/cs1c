#ifndef CARD_H_
#define CARD_H_

#include <string>

class card 
{
    public:
        /*--------  Accessor Functions  --------*/
        std::string getSuite();
        std::string getRank();
        int getSuiteVal();
        int getRankVal();
        
        /*--------  Mutator Functions  --------*/
        void setSuite(std::string initSuite);
        void setRank(std::string initSuite);
        void setSuiteVal(int initSuiteVal);
        void setRankVal(int initRankVal);

        void printCard();
    private:
        std::string suite;
        int suiteVal;
        std::string rank;
        int rankVal;
};

/*--------  Shuffle Functions  --------*/
void makeDeck(card array[]);
void printDeck(card array[]);
void shuffleDeck(card array[]);

#endif