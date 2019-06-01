#include "card.h"

Card::Card(Rank rank): _rank(rank) {}

Card::~Card(){}

Card::Card(int rank){
    switch (rank)
    {
        case 1:
            this->_rank = Four;
            break;
        case 2:
            this->_rank = Five;
            break;
        case 3:
            this->_rank = Six;
            break;
        case 4:
            this->_rank = Seven;
            break;
        case 5:
            this->_rank = Queen;
            break;
        case 6:
            this->_rank = Jack;
            break;
        case 7:
            this->_rank = King;
            break;
        case 8:
            this->_rank = Ace;
            break;
        case 9:
            this->_rank = Two;
            break;
        case 10:
            this->_rank = Three;
            break;
        case 11:
            this->_rank = SevenOfDiamonds;
            break;
        case 12:
            this->_rank = AceOfSpades;
            break;
        case 13:
            this->_rank = SevenOfHearts;
            break;
        case 14:
            this->_rank = FourOfClubs;
            break;
    }
}

Rank Card::get_rank() const {
    return this->_rank;
}