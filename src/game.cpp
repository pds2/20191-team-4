#include "game.h"

Game::Game(){
    
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
    if(final_scoreboard[0] == 3 || final_scoreboard[1] == 3){
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

    if(final_scoreboard[0] == 3){
        std::cout << "Time1 venceu!!!" << std::endl;
    }
    else{
        std::cout << "Time2 venceu!!!" << std::endl;
    }
}

//getters and setters----------------------------------------------------------------------

int Game::getScore_t1() {
    return this->score_t1;
}

void Game:: setScore_t1(int pontos) {
    this->score_t1 += pontos;
}

int Game::getScore_t2() {
    return this->score_t2;
}

void Game:: setScore_t2(int pontos) {
    this->score_t2 += pontos;
}

int Game::getFinal_scoreboard1() {
    return this->final_scoreboard[0];
}

void Game:: setFinal_scoreboard1 () {
    this->final_scoreboard[0]++;
}

int Game::getFinal_scoreboard2() {
    return this->final_scoreboard[1];
}

void Game:: setFinal_scoreboard2 () {
    this->final_scoreboard[1]++;
}
