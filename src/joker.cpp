#include "joker.h"

Joker::Joker(int rank, Color color):
    Card::Card(rank), _color(color) {}

Color Joker::get_color() const {
    return this->_color;
}

void Joker::print_card(){
    // IMPRIME CARTA (STRING)
}
