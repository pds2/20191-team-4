#include "hand.h"

Hand::Hand(Deck* deck){
    for(int i=0; i<HAND_SIZE; i++){
        this->hand.push_back(deck->draw_card());
    }
}

Hand::~Hand(){
    this->hand.clear();
}

void show_hand_card(Card *card){
    card->print_card();
}

void Hand::print_hand(){
    int card_counter = 1;
    std::vector<Card*>::iterator it;
    for(it = this->hand.begin(); it != this->hand.end(); ++it){
        std::cout << "Card " << card_counter << " -> ";
        card_counter++;
        show_hand_card(*it);
    }
}

Card* Hand::discard(int card_pos){
    card_pos--;

    Card* card = this->hand[card_pos];

    std::vector<Card*>::iterator it;
    it = this->hand.begin() + card_pos;

    this->hand.erase(it);
    return card;
}