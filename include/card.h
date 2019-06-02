#ifndef _CARD_H
#define _CARD_H

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string>

enum Rank {
    Four = 1,
    Five,
    Six,
    Seven,
    Queen,
    Jack,
    King,
    Ace,
    Two,
    Three,
    SevenOfDiamonds, // Sete de copas
    AceOfSpades, // Espadilha
    SevenOfHearts, // Sete de ouros
    FourOfClubs, // Zap
    RedJoker = 10,
    BlackJoker = 11
};

class Card {
    private:
        Rank _rank;
    public:
        Card(Rank rank);
        Card(int rank);
        ~Card();
        virtual Rank get_rank() const; // Retorna rank
        virtual void print_card() = 0; //POLIMORFISMO
};

#endif