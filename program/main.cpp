#include "card.h"
#include "usual_card.h"
#include "joker.h"
#include "deck.h"

int main(){

    Deck deck = Deck();

    deck.print_deck();

    std::cout << "Shuffling deck..." << std::endl;
    deck.shuffle_deck();

    deck.print_deck();

    return 0;
}