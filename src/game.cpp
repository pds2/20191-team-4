#include "game.h"

Game::Game(){
    points = 0;
    score_t1 = 0;
    score_t2 = 0;
    final_scoreboard[0] = 0;
    final_scoreboard[1] = 0;
}

void Game::reset_scoreboard(){
    score_t1 = 0;
    score_t2 = 0;
}

bool  Game::check_end(){
    if(final_scoreboard[0] == 2 || final_scoreboard[1] == 2){
        return false;
    }
    else{
        return true;
    }
}
void Game::print_scoreboard(){

    std::cout << "Placar atual: Time1 - " << this->score_t1 << " X " << this->score_t2 << " - Time2" << std::endl;
}

void Game::print_winner(){

    if(final_scoreboard[0] == 2){
        std::cout << "Time1 venceu!!!" << std::endl;
    }
    else{
        std::cout << "Time2 venceu!!!" << std::endl;
    }
}

void Game::increasePoint(){
    if(this->points == 2){
        this->setPoints(4);
    }
    else if(this->points == 4){
        this->setPoints(8);
    }
    else if(this->points == 8){
        this->setPoints(10);
    }
    else if(this->points == 10){
        this->setPoints(12);
    }
}

void Game::printHandWinner(GameLogic game_logic){

    if(game_logic.getTimeVenc() == 1){
        setScore_t1(2);
        std::cout << "PARABENS, SEU TIME PONTUOU NESSA MAO!" << std::endl;
        std::cout << std::endl;
        std::cout << "O PLACAR ATUAL E: Time1 - "<< getScore_t1() << " X "
                    << getScore_t2() << " - Time2" << std::endl;
    }
    if(game_logic.getTimeVenc() == 2){
        setScore_t2(2);
        std::cout << "OS SEUS INIMIGOS PONTUARAM NESSA MAO" << std::endl;
        std::cout << std::endl;
        std::cout << "O PLACAR ATUAL E: Time1 - "<< getScore_t1() << " X "
                    << getScore_t2() << " - Time2" << std::endl;
    }
}

void Game::printQuedaWinner(){

     //testa condicao de final de queda
    if(getScore_t1() >= 12){

        setFinal_scoreboard1();
        reset_scoreboard();

        std::cout << "PARABENS, SEU TIME GANHOU ESSA QUEDA!" << std::endl;
        std::cout << std::endl;
        std::cout << "O PLACAR ATUAL DE QUEDAS E: Time1 - "<< getFinal_scoreboard1() << " X "
                    << getFinal_scoreboard2() << " - Time2" << std::endl;
        std::cout << std::endl;

    }else if(getScore_t2() >= 12){
        
        setFinal_scoreboard2();
        reset_scoreboard();

        std::cout << "QUE PENA, O TIME OPONENTE GANHOU ESSA QUEDA!" << std::endl;
        std::cout << std::endl;
        std::cout << "O PLACAR ATUAL DE QUEDAS E: Time1 - "<< getFinal_scoreboard1() << " X "
                    << getFinal_scoreboard2() << " - Time2" << std::endl;
        std::cout << std::endl;
    }
}

//getters and setters----------------------------------------------------------------------

int Game::getPoints(){
    return this->points;
}

//pedindo truco aumenta o valor em 2 da jogada.
void Game::setPoints(int pontos){
    this->points = pontos;
}

int Game::getScore_t1() {
    return this->score_t1;
}

void Game::setScore_t1(int pontos) {
    this->score_t1 += pontos;
}

int Game::getScore_t2() {
    return this->score_t2;
}

void Game::setScore_t2(int pontos) {
    this->score_t2 += pontos;
}

int Game::getFinal_scoreboard1() {
    return this->final_scoreboard[0];
}

void Game::setFinal_scoreboard1 () {
    this->final_scoreboard[0] += 1;
}

int Game::getFinal_scoreboard2() {
    return this->final_scoreboard[1];
}

void Game::setFinal_scoreboard2 () {
    this->final_scoreboard[1] += 1;
}
