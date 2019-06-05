#ifndef _DECK_H
#define _DECK_H

#include <vector>
#include "card.h"
#include "usual_card.h"
#include "joker.h"

class Deck {
    // friend class Hand;
    private:
        std::vector<Card*> deck;
    public:
        Deck(); //Constructor
        ~Deck(); //Destructor
        void shuffle_deck(); //Shuffle the cards of deck
        void print_deck(); //Print all the cards of deck
        Card* draw_card(); //Draw one card from the top of the deck
};

#endif