#ifndef _USUAL_CARD_H
#define _USUAL_CARD_H

#include "card.h"

enum Suits {
    Clubs = 1,
    Hearts,
    Spades,
    Diamonds
};

class UsualCard : public Card {
    private:
        Suits _suit;
    public:
        UsualCard(Rank rank, Suits suit); //Constructor
        UsualCard(int rank, int suit); //Constructor
        Suits get_suit() const;
        virtual void print_card(); //Print card in string format
};

#endif