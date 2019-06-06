#ifndef _DECK_H
#define _DECK_H

#include "card.h"
#include "usual_card.h"
#include "joker.h"

class Deck {
    private:
        std::vector<Card*> deck;
    public:
        Deck(); //Constructor
        ~Deck(); //Destructor
        void shuffle_deck(); //Shuffle the cards of deck
        void print_deck(); //Print all the cards in deck
        Card* draw_card(); //Draw one card from the top of the deck
};

#endif