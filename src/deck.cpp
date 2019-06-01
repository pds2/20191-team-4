#include "deck.h"

Deck::Deck(){

    //UsualCard zap(FourOfClubs, Clubs); // Creating card "Zap"
    //deck.push_back(&zap);
    UsualCard* four_clubs = new UsualCard(FourOfClubs, Clubs); 
    deck.push_back(four_clubs);

    /* UsualCard sete_copas(SevenOfHearts, Hearts); // Creating card "Sete de copas"
    deck.push_back(&sete_copas); */
    UsualCard* seven_hearts = new UsualCard(SevenOfHearts, Hearts);
    deck.push_back(seven_hearts);

    /* UsualCard espadilha(AceOfSpades, Spades); // Creating card "Espadilha"
    deck.push_back(&espadilha); */
    UsualCard* ace_spades = new UsualCard(AceOfSpades, Spades);
    deck.push_back(ace_spades);

    /* UsualCard sete_ouros(SevenOfDiamonds, Diamonds); // Creating card "Sete de ouros"
    deck.push_back(&sete_ouros); */
    UsualCard* seven_diamonds = new UsualCard(SevenOfDiamonds, Diamonds);
    deck.push_back(seven_diamonds);

    for(int i=Clubs; i<=Diamonds; i++){
        for(int j=Four; j<=Three; j++){

            if(j == Four && i == Clubs) // Impedindo Zap
                continue;
            if(j == Seven && (i == Hearts || i == Diamonds)) // Impedindo Sete de Copas && Sete de Ouros 
                continue;
            if(j == Ace && i == Spades) // Impedindo Espadilha
                continue;
    
            UsualCard* card = new UsualCard(j, i);
            deck.push_back(card);
        }
    }

    /* Joker curinga_v(RedJoker, Red); // Creating Red Joker
    deck.push_back(&curinga_v); */
    Joker* r_joker = new Joker(RedJoker, Red);
    deck.push_back(r_joker);

    /* Joker curinga_b(BlackJoker, Black); // Creating Black Joker
    deck.push_back(&curinga_b); */
    Joker* b_joker = new Joker(BlackJoker, Black);
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
        //std::cout << *it <<std::endl;
        
    }

    /* for(int i=0; i<40; i++){
        //std::cout << deck[i]-> << std::endl;
    } */
}



