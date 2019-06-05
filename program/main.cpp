#include "card.h"
#include "usual_card.h"
#include "joker.h"
#include "deck.h"
#include "hand.h"

int main(){

    Deck deck = Deck();

    deck.print_deck();
    std::cout << std::endl;

    //std::cout << "Shuffling deck..." << std::endl;
    //deck.shuffle_deck();

    //deck.print_deck();

    std::cout << "Pegando a primeira carta do deck.." << std::endl;
    Card* card = deck.draw_card();
    std::cout << "Carta retirada: ";
    card->print_card();
    std::cout << std::endl;
    std::cout << std::endl;
    

    //Hand hand = Hand(&deck);

    

    deck.print_deck();


    return 0;
}