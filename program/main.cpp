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
    int firstPlayer = 0;
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
        std::cout << "Creating your hand..." << std::endl;
        Hand playerHand = Hand(&deck);//mao player
        std::cout << "Your hand is:" << std::endl;
        playerHand.print_hand();

        Hand ia1Hand = Hand(&deck);//mao IA aliada
        Hand ia2Hand = Hand(&deck);//mao IA oponente
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

        //Sorteia o primeiro a jogar uma carta.....
        firstPlayer = std::rand()%4;
        std::cout << "Jogador é: " << firstPlayer << std::endl;
/* 
        int card_pos;
        std::cout << "Discarding card: ";
        std::cin >> card_pos;
        hand.discard(card_pos);
*/      
        //IMPEDIR LOOPING INFINITO (MODIFICAR FUTURAMENTE , SÓ PARA TESTE)
        game.setScore_t1(12);



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