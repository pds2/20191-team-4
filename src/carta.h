#ifndef PDS2_CARTA_H
#define PDS2_CARTA_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include "baralho.h"

using namespace std;

class Carta : public Baralho{
   
     public:

        string naipes[4];//array que guarda o nome dos naipes das cartas
        string valor[10];//array que guarda o "valor" das cartas

    	Carta();
    	void MontaBaralho();
    	void ImprimeBaralho();
};

#endif