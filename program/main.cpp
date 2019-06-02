#include "card.h"
#include "usual_card.h"
#include "joker.h"
#include "deck.h"

int main(){

    Deck deck = Deck();

    deck.print_deck();

    //deck.~Deck();

    return 0;
}