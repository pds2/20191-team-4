#ifndef PDS2_BARALHO_H
#define PDS2_BARALHO_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

class Baralho{
   
    public:

    	int NumNaipes; //numero de naipes
    	int NumCartaNaipe; //numero de cartas por naipe  

    	vector<string> deck; //vector que armazena o baralho
    	int TotalCardNum;//Variável que armazena o numero total de cartas no baralho 
    	
    	Baralho();
    	virtual void MontaBaralho() = 0;
};

#endif