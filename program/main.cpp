#include "game.h"
#include "game_logic.h"
#include "game_exception.h"
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
   
    // Card* selectedCard;

    //------------------------------------------------------------------------------
  
    //INICIALIZAÇÃO DO JOGO
    Game game = Game();
    GameLogic game_logic = GameLogic();
    
    srand(time(0));

    //GAME LOOPING//
    while(game_looping == true){

        //pontos da partida inicial.
        game.setPoints(2);

        Deck deck = Deck();
        deck.shuffle_deck();

        //cria a mao do player e das tres IA's....
        Hand playerHand = Hand(&deck);//mao player
        Hand ia1Hand = Hand(&deck);//mao IA oponente
        Hand ia2Hand = Hand(&deck);//mao do aliado
        Hand ia3Hand = Hand(&deck);//mao IA oponente

        //Game logic happens....
        game_logic.roundsControl(playerHand, ia1Hand, ia2Hand, ia3Hand);

        game.printHandWinner(game_logic);
        
        std::cout << std::endl;

        game.printQuedaWinner();
        
        //testa condicao de fim da partida (acabou a melhor de três quedas)
        //ATENCAO: essa deve ser a ultima linha dentro do game looping....
        game_looping = game.check_end();
    }

    game.print_winner();

    return 0;
}