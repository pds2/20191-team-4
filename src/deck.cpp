#include "deck.h"

Deck::Deck(){

    UsualCard* four_clubs = new UsualCard(FourOfClubs, Clubs); //Creating "Four of Clubs (Zap)"
    deck.push_back(four_clubs);

    UsualCard* seven_hearts = new UsualCard(SevenOfHearts, Hearts); //Creating "Seven of Hearts (Sete de Copas)"
    deck.push_back(seven_hearts);

    UsualCard* ace_spades = new UsualCard(AceOfSpades, Spades); //Creating "Ace of Spades (Espadilha)"
    deck.push_back(ace_spades);

    UsualCard* seven_diamonds = new UsualCard(SevenOfDiamonds, Diamonds); //Creating "Seven of Diamonds (Sete de Ouros)"
    deck.push_back(seven_diamonds);

    for(int i=Clubs; i<=Diamonds; i++){
        for(int j=Four; j<=Three; j++){

            //Preventing duplicate creation of the cards already created
            if(j == Four && i == Clubs)
                continue;
            if(j == Seven && (i == Hearts || i == Diamonds))
                continue;
            if(j == Ace && i == Spades)
                continue;
    
            UsualCard* card = new UsualCard(j, i);
            deck.push_back(card);
        }
    }

    Joker* r_joker = new Joker(RedJoker, Red); //Creating Red Joker
    deck.push_back(r_joker);

    Joker* b_joker = new Joker(BlackJoker, Black); //Creating Black Joker
    deck.push_back(b_joker);
}

Deck::~Deck(){
    int deck_size = this->deck.size();
    for(int i=0; i<deck_size; i++){
        delete this->deck[i];
    }
    this->deck.clear();
}

void Deck::shuffle_deck(){
    std::random_shuffle(deck.begin(), deck.end());
}

void show_card(Card *card){
    card->print_card();
}

void Deck::print_deck(){
    std::vector<Card*>::iterator it;
    for(it = deck.begin(); it != deck.end(); ++it){
        show_card(*it);
    }
}

Card* Deck::draw_card(){
    Card* card = this->deck[0]; //get the first card of the deck
    std::vector<Card*>::iterator it;
    it = this->deck.begin();
    this->deck.erase(it); //remove the first card of the deck
    return card; // return first card
}

