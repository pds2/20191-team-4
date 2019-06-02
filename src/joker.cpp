#include "joker.h"

Joker::Joker(Rank rank, Color color):
    Card::Card(rank), _color(color) {}

Joker::Joker(int rank, int color): Card::Card(rank) {
    switch (color)
    {
        case 1:
            this->_color = Red;
            break;
        case 2:
            this->_color = Black;
            break;
    }
}

Color Joker::get_color() const {
    return this->_color;
}

void Joker::print_card(){
    int color = this->_color;
    std::string color_string;
    
    switch (color)
    {
        case 1:
            color_string = "Red";
            break;
        case 2:
            color_string = "Black";
            break;
    }

    std::cout << color_string << " Joker" << std::endl;
}