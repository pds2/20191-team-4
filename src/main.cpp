#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include "baralho.h"
#include "carta.h"

using namespace std;

int main(){
    
    const int NumCartaMao = 3;//numero de cartas na mao de um jogador
   
    Carta obj = Carta();//instancia um obj do tipo "Carta"

    obj.MontaBaralho(); //chama funcao para montar o baralho

    obj.ImprimeBaralho(); //testa se baralho foi montado corretamente
      
//"Embaralhando" o baralho (comprando cartas aleatorias)...........
    srand(time(0));

    int auxCarta = 0;//conta quantas carta ja existem na mao do jogador

    while (auxCarta < NumCartaMao){

	    int CartaAleatoria = rand()%TotalCardNum;//gera um numero aleatorio baseado na quantidade de cartas restantes no baralho
	 
	    string CompraCarta = Baralho.at(CartaAleatoria); //acessa o vector Baralho na posicao(at) "CartaAleatoria";
	 
	    // remove carta do baralho para que não seja duplicada
	    Baralho.erase(Baralho.begin() + CartaAleatoria);
	    
	  
	    TotalCardNum--; //diminui em 1 o numero total de cartas restantes no baralho

	    auxCarta++; //adiciona em 1 o numero de cartas na mao do jogador
	  
	    cout << CompraCarta << endl;//exibe carta comprada
	}

return 0;
}

