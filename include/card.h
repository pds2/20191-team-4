#ifndef _CARD_H
#define _CARD_H

#include <iostream>     // std::cout, std::cin
#include <algorithm>    // std::random_shuffle
#include <stdio.h>
#include <stdlib.h>
#include <string>       // std::string
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

enum Rank { //All possible ranks
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
    SevenOfDiamonds, //Sete de copas
    AceOfSpades, //Espadilha
    SevenOfHearts, //Sete de ouros
    FourOfClubs, //Zap
    RedJoker = 10, //Curinga Vermelho
    BlackJoker = 11 //Curinga Preto
};

class Card {
    private:
        Rank _rank;
    public:
        Card(Rank rank); //Constructor
        Card(int rank); //Constructor
        virtual ~Card(); //Descructor
        virtual Rank get_rank() const; //Return rank
        virtual void print_card() = 0; //Polymorphic method
};

#endif