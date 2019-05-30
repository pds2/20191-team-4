#ifndef _CARD_H
#define _CARD_H

class Card {
    private:
        int _rank;
    public:
        Card(int rank);
        virtual int get_rank() const; // Retorna rank
        virtual void print_card() = 0; //POLIMORFISMO
};

#endif