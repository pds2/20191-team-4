#ifndef _HAND_H
#define _HAND_H

#include <vector>
#include "card.h"
#include "deck.h"

#define HAND_SIZE 3

class Hand {
    private:
        std::vector<Card*> hand;
    public:
        Hand(Deck* deck);
        ~Hand();
        void print_hand(); //Print the cards in hand
        Card* discard(int card_pos); //Discard
};

#endif