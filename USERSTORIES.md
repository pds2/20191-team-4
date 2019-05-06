# PDSII - TEAM 4

## Truco Mineiro - User Stories

- Como um jogador, em uma partida de Truco Mineiro , eu quero poder jogar contra outro jogador em uma partida 1 x 1, ou com outro jogador,formando uma dupla, enfrentando outra. No caso de uma partida com 2 duplas, os jogadores de cada dupla sentam-se de forma alternada.

- Como jogador, receberei 3 cartas no inicio de cada mão.

- Como jogador, quero ganhar duas das três rodadas (mão), que me valerão 2 tentos.

- Como jogador, quero ter a possibilidade de embaralhar a primeira mão do jogo. Neste caso, o próximo jogador será sempre o que está a minha direita.

- Para começar, o jogador escolhido na etapa anterior coloca uma carta de sua mão na mesa, podendo desde o início pedir truco, ou não.

-Como jogador, se eu for o escolhido para iniciar a rodada, devo colocar uma carta a mesa, podendo pedir truco ou não.

- Um jogador pode, exceto quando está abrindo a primeira rodada, colocar sua carta virada para baixo na mesa (Uma carta virada para baixo tem valor nulo na rodada atual). 
- Eu, como jogador, posso colocar uma carata virada para baixo(de coberta), exceto quando estou abrindo a rodada. Essa carta tem valor nulo na rodada.

- Na vez de um jogador colocar uma carta na mesa, se o adversário não pediu truco naquela rodada, o jogador pode pedir truco, ou seguir o jogo normalmente. 

- Se um jogador pede truco, ocorrem duas situações:
	
	1- Se o próximo adversário não aceitar o pedido de truco, então ele perde a mão.
  
	2- Se o próximo adversário  aceitar o pedido de truco, então aquela mão passa a valer 4 "tentos". Sendo possível que, de forma alternada, as duplas aumentem o valor da mão para 6, 9, ou 12 "tentos". Note que a cada aumento do valor da mão, uma dupla pode desistir daquela mão, sedendo um valor em pontos igual ao ultimo aumento acordado.

- Quando um jogador, ou sua dupla, possuem 10 "tentos" (chamada de "mão de 10"), nenhum jogador é autorizado a pedir truco nessa mão. Caso peça, cederá 2 "tentos" ao adversário, pois perderá a mão.

- Quando um jogador, ou sua dupla, estiverem na "mão de 10", a mão passa a valer 4 "tentos" por padrão.

- A partida termina quando um jogador, ou dupla de jogadores, atinge 12 "tentos".
