#include "usual_card.h"

UsualCard::UsualCard(int rank, Suits suit):
    Card::Card(rank), _suit(suit) {}

Suits UsualCard::get_suit() const {
    return this->_suit;
}

void UsualCard::print_card(){
    // IMPRIME CARTA (STRING)
}