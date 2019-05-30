#include "card.h"

Card::Card(int rank): _rank(rank){}

int Card::get_rank() const {
    return this->_rank;
}