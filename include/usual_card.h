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
        UsualCard(int rank, Suits suit); //Construtor
        Suits get_suit() const; //Retorna naipe
        virtual void print_card(); //Imprime carta
};

#endif