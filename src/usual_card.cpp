#include "usual_card.h"

UsualCard::UsualCard(Rank rank, Suits suit):
    Card::Card(rank),  _suit(suit) {}

UsualCard::UsualCard(int rank, int suit): Card::Card(rank) {
    switch (suit)
    {
        case 1:
            this->_suit = Clubs;
            break;
        case 2:
            this->_suit = Hearts;
            break;
        case 3:
            this->_suit = Spades;
            break;
        case 4:
            this->_suit = Diamonds;
            break;
    }
}

Suits UsualCard::get_suit() const {
    return this->_suit;
}

// Imprime carta (STRING)
void UsualCard::print_card(){
    int suit = this->_suit;
    int rank = this->get_rank();

    std::string suit_string;
    std::string rank_string;

    switch (suit)
    {
        case 1:
            suit_string = "Clubs";
            break;
        case 2:
            suit_string = "Hearts";
            break;
        case 3:
            suit_string = "Spades";
            break;
        case 4:
            suit_string = "Diamonds";
            break;
    }

    switch (rank)
    {
        case 1: case 14:
            rank_string = "Four";
            break;
        case 2:
            rank_string = "Five";
            break;
        case 3:
            rank_string = "Six";
            break;
        case 4: case 11: case 13:
            rank_string = "Seven";
            break;
        case 5:
            rank_string = "Queen";
            break;
        case 6:
            rank_string = "Jack";
            break;
        case 7:
            rank_string = "King";
            break;
        case 8: case 12:
            rank_string = "Ace";
            break;
        case 9:
            rank_string = "Two";
            break;
        case 10:
            rank_string = "Three";
            break;
    }

    std::cout << rank_string << " of " << suit_string << std::endl;

}
