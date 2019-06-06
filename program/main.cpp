#include "card.h"
#include "usual_card.h"
#include "joker.h"
#include "deck.h"
#include "hand.h"

int main(){

    Deck deck = Deck();

    deck.shuffle_deck();
    deck.print_deck();
    std::cout << std::endl;

    //std::cout << "Shuffling deck..." << std::endl;
    //deck.shuffle_deck();

    //deck.print_deck();

    /*
    std::cout << "Pegando a primeira carta do deck.." << std::endl;
    Card* card = deck.draw_card();
    std::cout << "Carta retirada: ";
    teste1
    card->print_card();
    std::cout << std::endl;
    std::cout << std::endl;
    */
    
    std::cout << "Creating hand..." << std::endl;
    Hand hand = Hand(&deck);
    std::cout << "Hand:" << std::endl;
    hand.print_hand();

    int card_pos;
    std::cout << "Discarding card: ";
    std::cin >> card_pos;
    hand.discard(card_pos);

    std::cout << "Hand:" << std::endl;
    hand.print_hand();

    std::cout << std::endl;
    

    // deck.print_deck();


    return 0;
}