#ifndef _TABLE_H
#define _TABLE_H

#include "card.h"
#include "hand.h"
#include "deck.h"

class Table {
    private:
        std::vector<Card*> table;
    public:
        Table();
        ~Table();
        //void print_table();
        void recollect_cards(Deck* deck); // Get the cards from the table and put back on the deck
        void throw_on_table(Card* card);
};

#endif