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
        Joker(Rank rank, Color Color); // Construtor
        Joker(int rank, int color); //Construtor
        Color get_color() const; //Retorna Cor
        virtual void print_card(); //Imprime carta
};

#endif