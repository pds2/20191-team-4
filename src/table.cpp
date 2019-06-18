#include "table.h"

Table::Table(){}

Table::~Table(){
    this->table.clear();
}

//devolve as cartas para o deck
void Table::recollect_cards(Deck* deck){
    std::vector<Card*>::iterator it;
    for(it = this->table.begin(); it != this->table.end(); ++it){
        deck->insert_card(*it);
    }
    // this->table.clear();
}

//coloca uma carta na mesa
void Table::throw_on_table(Card* card){
    this->table.push_back(card);
}