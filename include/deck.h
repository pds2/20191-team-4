#ifndef _DECK_H
#define _DECK_H

#include <vector>
#include "card.h"
#include "usual_card.h"
#include "joker.h"

class Deck {
    private:
        std::vector<Card*> deck;
    public:
        Deck(); //Constructor
        ~Deck(); //Destructor
        void shuffle_deck();
        void print_deck(); //Print all the cards in the deck
        //Card* draw(); //Retorna carta aleatoria
};

#endif