#ifndef _HAND_H
#define _HAND_H

#include <vector>
#include "card.h"
#include "deck.h"
// #include "table.h"
class Table;


#define HAND_SIZE 3

class Hand {
    private:
        std::vector<Card*> hand;
    public:
        Hand(Deck* deck);
        ~Hand();
        void print_hand(); //Print the cards in hand
        Card* discard(int card_pos); //Discard
        void discard_hand(Table *table); //Discard all the hand on the table
        int hand_size();
};

#endif