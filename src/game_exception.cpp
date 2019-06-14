#include "game_exception.h"

GameException::GameException():exception(){
    
}

const char* GameException::what() const throw() {
	return "Valor escolhido invalido, refaça sua escolha......";
}
