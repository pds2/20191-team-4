#include "game.h"
#include "card.h"
#include "usual_card.h"
#include "joker.h"
#include "deck.h"
#include "hand.h"
#include <ctime>    // For time() 
#include <cstdlib>  // For srand() and rand()   

int main(){

    //variables declaration
    bool game_looping = true;
    //int firstPlayer = 0;
    //------------------------------------------------------------------------------
    
    //deck.print_deck();

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

    //INICIALIZAÇÃO DO JOGO//
    Game game = Game();
    srand(time(0));
    Card* selectedCard;

    //GAME LOOPING//
    while(game_looping == true){
        //pontos da partida inicial.
        game.setPoints(2);

        //testando o truco
        /*
        std::cout << game.getPoints() << std::endl;
        game.increasePoint();
        std::cout << game.getPoints() << std::endl;
        game.increasePoint();
        std::cout << game.getPoints() << std::endl;
        game.increasePoint();
        std::cout << game.getPoints() << std::endl;
        game.increasePoint();
        std::cout << game.getPoints() << std::endl;
        game.increasePoint();
        std::cout << game.getPoints() << std::endl;
        */


        //inicio do jogo.....
        Deck deck = Deck();
        deck.shuffle_deck();

        //cria a mao do player e das tres IA's....
        //std::cout << "Creating your hand..." << std::endl;
        Hand playerHand = Hand(&deck);//mao player
        //std::cout << "Your hand is:" << std::endl;
        //playerHand.print_hand();

        Hand ia1Hand = Hand(&deck);//mao IA oponente
        Hand ia2Hand = Hand(&deck);//mao do aliado
        Hand ia3Hand = Hand(&deck);//mao IA oponente
/*
        std::cout << "IA1Hand:" << std::endl;
        ia1Hand.print_hand();
        std::cout << "IA2Hand:" << std::endl;
        ia2Hand.print_hand();
        std::cout << "IA3Hand:" << std::endl;
        ia3Hand.print_hand();
*/
        std::cout << std::endl;

        //vamos evitar sortear o jogador para nao gerar dificuldades no gameloop!
        //firstPlayer = 0;//nesse caso colocamos sempre o jogador para ser o primeiro


        int choosenCard;//variavel que vai ser a carta escolhida
        int maiorCarta;//variavel que vai armazenar o peso da maior carta
        int timePrimeira = 0; //variavel que armazenará o time que fez a primeira.
        int timeVenc = 0;//variavel que vai armazenar quem tá vencendo
        int miniPlacar[2] = {0,0};//vai anotar o placar da melhor de 3
        //ESSE É O LOOP DA RODADA!!! //
        for(int i=0;i<3;i++){
            
            //CASOS NORMAIS DE VITORIA DO JOGADOR
            if( (miniPlacar[0] == 2 && miniPlacar[1] < 2 ) || (miniPlacar[0] == 3 && miniPlacar[1] < 3) ){
                timeVenc = 1;
                break;
            }

            //CASOS DE VITORIA DO OPONENTE
            else if( (miniPlacar[1] == 2 && miniPlacar[0] < 2 ) || (miniPlacar[1] == 3 && miniPlacar[0] < 3) ){
                timeVenc = 2;
                break;
            }
            //CASO DE CANGAR NO FINAL E TIME JOGADOR FEZ PRIMEIRA
            else if(miniPlacar[1] == 2 && miniPlacar[0] == 2 && timePrimeira == 1){
                timeVenc = 1;
                break;
            }

            //CASO DE CANGAR NO FINAL E TIME JOGADOR FEZ PRIMEIRA
            else if(miniPlacar[1] == 2 && miniPlacar[0] == 2 && timePrimeira == 2){
                timeVenc = 2;
                break;
            }

            //CASO DE CANGAR NO FINAL E TIME JOGADOR FEZ PRIMEIRA
            else if(miniPlacar[1] == 3 && miniPlacar[0] == 3 && timePrimeira == 1){
                timeVenc = 1;
                break;
            }

            //CASO DE CANGAR NO FINAL E TIME JOGADOR FEZ PRIMEIRA
            else if(miniPlacar[1] == 3 && miniPlacar[0] == 3 && timePrimeira == 2){
                timeVenc = 2;
                break;
            }

            //CASO RARO DE EMPATE EM QUE TODO MUNDO CANGOU
            else if(miniPlacar[0] == 3 && miniPlacar[1] == 3 && timePrimeira == 0){
                timeVenc = 0;
                break;
            }


            //CASO RARO DE EMPATE EM QUE TODO MUNDO CANGOU
            else if(miniPlacar[0] == 3 && miniPlacar[1] == 3){
                timeVenc = 0;
                break;
            }
            



            //sinalizadores em qual mao esta
            choosenCard = 0;
            maiorCarta = 0;//deve iniciar zero para armazenar qual sera a maior carta da vez
            timeVenc = 0;//armazenara qual time vencera , sendo 1 o seu e 2 do oponente. 0 é empate

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
                    std::cin >> choosenCard;
                    selectedCard = playerHand.discard(choosenCard);
                    std::cout << "Voce jogou a carta: ";
                    selectedCard->print_card();
                    //std::cout << "Peso carta:" << selectedCard->get_rank() << std::endl;

                    //caso que voce esteja fazendo
                    if(selectedCard->get_rank() > maiorCarta){
                        maiorCarta = selectedCard->get_rank();
                        timeVenc = 1;
                    }
                    //caso de cangar
                    else if(selectedCard->get_rank() == maiorCarta){
                        maiorCarta = selectedCard->get_rank();
                        timeVenc = 0;
                    }
                }

                //vez INIMIGO 1
                if(j==1){
                    choosenCard = (std::rand()%(3-i)) + 1;
                    selectedCard = ia1Hand.discard(choosenCard);
                    std::cout << "Oponente 1 jogou a carta: ";
                    selectedCard->print_card();
                    //caso seu inimigo esteja fazendo
                    if(selectedCard->get_rank() > maiorCarta){
                        maiorCarta = selectedCard->get_rank();
                        timeVenc = 2;
                    }
                    //caso seu inimigo cangue
                    else if(selectedCard->get_rank() == maiorCarta){
                        timeVenc = 0;
                    }
                }

                //vez Parceiro
                if(j==2){
                    choosenCard = (std::rand()%(3-i)) + 1;
                    selectedCard = ia2Hand.discard(choosenCard);
                    std::cout << "Seu Parceiro jogou a carta: ";
                    selectedCard->print_card();
                    //caso seu parceiro esteja fazendo
                    if(selectedCard->get_rank() > maiorCarta){
                        maiorCarta = selectedCard->get_rank();
                        timeVenc = 1;
                    }
                    //caso seu parceiro cangue
                    else if(selectedCard->get_rank() == maiorCarta){
                        timeVenc = 0;
                    }
                }

                //vez INIMIGO 2
                if(j==3){
                    choosenCard = (std::rand()%(3-i)) + 1;
                    selectedCard = ia3Hand.discard(choosenCard);
                    std::cout << "Oponente 2 jogou a carta: ";
                    selectedCard->print_card();
                    //caso seu inimigo faca
                    if(selectedCard->get_rank() > maiorCarta){
                        maiorCarta = selectedCard->get_rank();
                        timeVenc = 2;
                    }
                    //caso seu inimigo cangue
                    else if(selectedCard->get_rank() == maiorCarta){
                        timeVenc = 0;
                    }
                }

            }

            if(timeVenc == 0){
                std::cout << "CANGOU!" << std::endl;
                miniPlacar[0]++;
                miniPlacar[1]++;

            }
            if(timeVenc == 1){
                std::cout << "VOCE E SEU PARCEIRO FIZERAM!" << std::endl;
                miniPlacar[0]++;
                if(i == 0){
                    timePrimeira = 1;
                }
            }
            if(timeVenc == 2){
                std::cout << "SEUS INIMIGOS FIZERAM!" << std::endl;
                miniPlacar[1]++;
                if(i == 0){
                    timePrimeira = 2;
                }
            }


            //aqui saberemos qual time fez a vitoria da mao 
            std::cout << std::endl;
        }

/*      
        int card_pos;
        std::cout << "Discarding card: ";
        std::cin >> card_pos;
        hand.discard(card_pos);
*/      
        //IMPEDIR LOOPING INFINITO (MODIFICAR FUTURAMENTE , ADICIONANDO O VALOR REAL DO GAME)
        std::cout << std::endl;
        if(timeVenc == 1){
            game.setScore_t1(12);
            std::cout << "PARABENS SEU TIME PONTUOU +1 NA MELHOR DE 3" << std::endl;
        }
        if(timeVenc == 2){
            game.setScore_t2(12);
            std::cout << "OS SEUS INIMIGOS PONTUARAM +1 NA MELHOR DE 3" << std::endl;
        }
        std::cout << std::endl;



        deck.~Deck();//coloquei essa chama aqui só pra poder compilar kkkk




        //testa condicao de final de queda
        if(game.getScore_t1() >= 12){

            game.setFinal_scoreboard1();
            game.reset_scoreboard();

        }else if(game.getScore_t2() >= 12){

            game.setFinal_scoreboard2();
            game.reset_scoreboard();
        }
        
        //testa condicao de fim da partida (acabou a melhor de três)
        //ATENCAO: essa deve ser a ultima linha dentro do game looping....
        game_looping = game.check_end();
    }
    game.print_winner();

    // deck.print_deck();


    return 0;
}