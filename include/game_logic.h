#ifndef _GAME_LOGIC_H
#define _GAME_LOGIC_H

#include <iostream>
#include "card.h"
#include "hand.h"
#include "game_exception.h"

class GameLogic {

    private:

        int choosenCard;//variavel que vai ser a carta escolhida
        int maiorCarta;//variavel que vai armazenar o peso da maior carta
        int timePrimeira = 0; //variavel que armazenará o time que fez a primeira.
        int timeVenc = 0;//variavel que vai armazenar quem tá vencendo
        int miniPlacar[2];//vai anotar o placar da melhor de 3

    public:

        GameLogic();
        void roundsControl(Hand playerHand, Hand ia1Hand, Hand ia2Hand, Hand ia3Hand);
        int testRoundWinner(int i);
        void checkOpponentWinRound(Card *selectedCard);
        void checkYouWinRound(Card *selectedCard);
        int testHandWinner();
        void cleanHandLogic();
        int getTimeVenc();
};

#endif