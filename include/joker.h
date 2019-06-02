#ifndef _JOKER_H
#define _JOKER_H

#include "card.h"

enum Color {
    Red = 1,
    Black
};

class Joker : public Card {
    private:
        Color _color;
    public:
        Joker(Rank rank, Color Color); //Constructor
        Joker(int rank, int color); //Constructor
        Color get_color() const;
        virtual void print_card(); //Print card in string format
};

#endif