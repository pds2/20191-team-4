#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include "carta.h"

using namespace std;

Carta::Carta():Baralho(){

     naipes[0] = "Copas";
     naipes[1] = "Paus";
     naipes[2] = "Ouros";
     naipes[3] = "Espadas";

     valor[0] = "2";
     valor[1] = "3";
     valor[2] = "4";
     valor[3] = "5";
     valor[4] = "6";
     valor[5] = "7";
     valor[6] = "Valete";
     valor[7] = "Dama";
     valor[8] = "Rei";
     valor[9] = "As";
}

void Carta::MontaBaralho(){

	string carta = ""; //variavel que armazena qual carta é (naipe + "valor")

	for (int i = 0; i < NumNaipes; i++){ //itera por naipe
    
        for (int j = 0 ; j < NumCartaNaipe; j++){//itera por valor da carta

        	//cria a carta....
        	carta = valor[j] + " de " + naipes[i]; 
			
            deck.push_back(carta);  // adiciona a carta criada ao baralho
            TotalCardNum++;// Aumenta em 1 a contagem do total de cartas no baralho
        }
    }
}

void Carta::ImprimeBaralho(){

	for(int i = 0; i < deck.size(); i++){
		
		cout << deck[i] << endl;
	}
}