
#include "game_logic.h"

GameLogic::GameLogic(){

    this->choosenCard = 0;
    this->maiorCarta = 0;
    this->timePrimeira = 0;
    this->timeVenc = 0;
    this->miniPlacar[0] = 0;
    this->miniPlacar[1] = 0;
}

void GameLogic::cleanHandLogic(){//limpa a logica entre cada mão

    this->choosenCard = 0;
    this->maiorCarta = 0;
    this->timePrimeira = 0;
    this->miniPlacar[0] = 0;
    this->miniPlacar[1] = 0;
}

int GameLogic::testHandWinner(){//testa quem venceu a mão atual

    //CASOS NORMAIS DE VITORIA DO JOGADOR
    if( (this->miniPlacar[0] == 2 && this->miniPlacar[1] < 2 ) || 
        (this->miniPlacar[0] == 3 && this->miniPlacar[1] < 3) ){
        return this->timeVenc = 1;
    }
    //CASOS DE VITORIA DO OPONENTE
    else if( (this->miniPlacar[1] == 2 && this->miniPlacar[0] < 2 ) || 
             (this->miniPlacar[1] == 3 && this->miniPlacar[0] < 3) ){
        return this->timeVenc = 2;
    }
    //CASO DE CANGAR NO FINAL E TIME JOGADOR FEZ PRIMEIRA (cada time faz uma e canga na terceira)
    else if(this->miniPlacar[1] == 2 && this->miniPlacar[0] == 2 && this->timePrimeira == 1){
        return this->timeVenc = 1;
    }
    //CASO DE CANGAR NO FINAL E TIME OPONENTE FEZ PRIMEIRA (cada time faz uma e canga na terceira)
    else if(this->miniPlacar[1] == 2 && this->miniPlacar[0] == 2 && this->timePrimeira == 2){
        return this->timeVenc = 2;
    }
    //CASO DE CANGAR NA SEGUNDA E TIME JOGADOR FEZ PRIMEIRA
    else if(this->miniPlacar[0] == 2 && this->miniPlacar[1] == 1){
        return this->timeVenc = 1;
    }
    //CASO DE CANGAR NA SEGUNDA E TIME OPONENTE FEZ PRIMEIRA
    else if(this->miniPlacar[1] == 2 && this->miniPlacar[0] == 1){
        return this->timeVenc = 2;
    }
    //CASO RARO DE EMPATE EM QUE TODO MUNDO CANGOU
    else if(this->miniPlacar[0] == 3 && this->miniPlacar[1] == 3){
        return this->timeVenc = 0;
    }
    //CASO NÃO ENTRE EM NENHUM CASO O JOGO DEVE SEGUIR SEU FLUXO.....
    else{
        return 999;
    }
}

void GameLogic::checkYouWinRound(Card *selectedCard){//checa se seu time venceu a rodada atual da mão

    //caso que voce esteja fazendo
    if(selectedCard->get_rank() > this->maiorCarta){
        this->maiorCarta = selectedCard->get_rank();
        this->timeVenc = 1;
    }
    //caso de cangar e a carta do oponente era maior
    else if(selectedCard->get_rank() == this->maiorCarta && timeVenc == 2){
        this->timeVenc = 0;
    }
    //caso seu aliado jogue uma carta de mesmo peso que a sua
    else if(selectedCard->get_rank() == this->maiorCarta && timeVenc == 1){
        this->timeVenc = 1;
    }
}

void GameLogic::checkOpponentWinRound(Card *selectedCard){//checa se o time adversario venceu a rodada atual da mão

    //caso seu inimigo esteja fazendo
    if(selectedCard->get_rank() > this->maiorCarta){
        this->maiorCarta = selectedCard->get_rank();
        this->timeVenc = 2;
    }
    //caso seu inimigo cangue e sua carta era maior
    else if(selectedCard->get_rank() == this->maiorCarta && timeVenc == 1){
        this->timeVenc = 0;
    }
    //caso seus inimigos jogam cartas de mesmo rank
    else if(selectedCard->get_rank() == this->maiorCarta && timeVenc == 2){
        this->timeVenc = 2;
    }
}

int GameLogic::testRoundWinner(int i){//checa vitoria por rodada

    if(this->timeVenc == 0){
        std::cout << "CANGOU!" << std::endl;
        this->miniPlacar[0]++;
        this->miniPlacar[1]++;
        if(i == 0){
            this->timePrimeira = 0;
        }
    }

    if(this->timeVenc == 1){
        std::cout << "VOCE E SEU PARCEIRO FIZERAM!" << std::endl;
        this->miniPlacar[0]++;
        if(i == 0){
            this->timePrimeira = 1;
        }
    }

    if(this->timeVenc == 2){
        std::cout << "SEUS INIMIGOS FIZERAM!" << std::endl;
        this->miniPlacar[1]++;
        if(i == 0){
            this->timePrimeira = 2;
        }
    }

    std::cout << std::endl;
    return testHandWinner();
}

void GameLogic::roundsControl(Card* selectedCard, Hand playerHand, Hand ia1Hand, Hand ia2Hand, Hand ia3Hand){

    int aux_timeVenc;

    //ESSE É O LOOP DA RODADA!!! //
    for(int i=0;i<3;i++){
        
        this->choosenCard = 0;//por padrão a carta escolhida é sempre a primeira (puramente arbitrario)
        this->maiorCarta = 0;//deve iniciar zero para armazenar qual sera a maior carta da vez
        this->timeVenc = 0;//armazenara qual time vencera , sendo 1 o seu e 2 o do oponente. 0 é empate.

        if(i==0){
            std::cout << "PRIMEIRA" << std::endl;
        }
        if(i==1){
            std::cout << "SEGUNDA" << std::endl;
        }
        if(i==2){
            std::cout << "TERCEIRA" << std::endl;
        }

        for(int j=0;j<4;j++){

            //vez do jogador
            if(j==0){
                
                std::cout << "Qual carta voce quer jogar?" << std::endl;
                playerHand.print_hand();

                try{
                    std::cin >> this->choosenCard;

                    if(this->choosenCard != 1 &&
                        this->choosenCard != 2 &&
                        this->choosenCard != 3 ){
                        throw GameException();
                    }
                }   
                catch(GameException &e){
                    std::cerr << e.what() << std::endl;
                }
                
                selectedCard = playerHand.discard(this->choosenCard);
                std::cout << "Voce jogou a carta: ";
                selectedCard->print_card();
                
                checkYouWinRound(selectedCard);                    
            }

            //vez INIMIGO 1
            if(j==1){
                this->choosenCard = (std::rand()%(3-i)) + 1;
                selectedCard = ia1Hand.discard(this->choosenCard);
                std::cout << "Oponente 1 jogou a carta: ";
                selectedCard->print_card();
                
                checkOpponentWinRound(selectedCard);
            }

            //vez Parceiro
            if(j==2){
                this->choosenCard = (std::rand()%(3-i)) + 1;
                selectedCard = ia2Hand.discard(this->choosenCard);
                std::cout << "Seu Parceiro jogou a carta: ";
                selectedCard->print_card();

                checkYouWinRound(selectedCard);
            }

            //vez INIMIGO 2
            if(j==3){
                this->choosenCard = (std::rand()%(3-i)) + 1;
                selectedCard = ia3Hand.discard(this->choosenCard);
                std::cout << "Oponente 2 jogou a carta: ";
                selectedCard->print_card();

                checkOpponentWinRound(selectedCard);
            }
        }

        aux_timeVenc = testRoundWinner(i);

        if(aux_timeVenc != 999){
            cleanHandLogic();
            std::cout << std::endl;
            break;
        }
    }

}

//getters and setters..............................
int GameLogic::getTimeVenc(){
    return this->timeVenc;
}        