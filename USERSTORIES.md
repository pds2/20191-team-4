# PDSII - TEAM 4

## Truco Mineiro - User Stories

- Uma partida de Truco Mineiro pode ter 2 jogadores, sendo 1 contra 1, ou pode ter 4 jogadores, jogando 2 duplas. No caso de uma partida com 2 duplas, os jogadores de cada dupla sentam-se de forma alternada.

- Cada partida é composta por um número máximo de 11 mãos.

- No início de cada mão, cada jogador recebe 3 cartas aleatórias.

- Cada mão vale por padrão 2 "tentos" (pontos), e é composta por 3 rodadas.

- No início da primeira mão um jogador é escolhido aleatoriamente para começar jogando. Além disso, a mão subsequente deve ser iniciada pelo jogador à esquerda do anterior.

- Para começar, o jogador escolhido na etapa anterior coloca uma carta de sua mão na mesa, podendo desde o início pedir truco, ou não.

- Um jogador pode, exceto quando está abrindo a primeira rodada, colocar sua carta virada para baixo na mesa (Uma carta virada para baixo tem valor nulo na rodada atual). 

- Na vez de um jogador colocar uma carta na mesa, se o adversário não pediu truco naquela rodada, o jogador pode pedir truco, ou seguir o jogo normalmente. 

- Se um jogador pede truco, ocorrem duas situações:
	
	1- Se o próximo adversário não aceitar o pedido de truco, então ele perde a queda.
  
	2- Se o próximo adversário  aceitar o pedido de truco, então aquela mão passa a valer 4 "tentos". Sendo possível que, de forma alternada, as duplas aumentem o valor da mão para 6, 9, ou 12 "tentos". Note que a cada aumento do valor da mão, uma dupla pode desistir daquela mão, sedendo um valor em pontos igual ao ultimo aumento acordado.

- Quando um jogador, ou sua dupla, possuem 10 "tentos" (chamada de "mão de 10"), nenhum jogador é autorizado a pedir truco nessa mão. Caso peça, sederá 2 "tentos" ao adversário, pois perderá a mão.

- Quando um jogador, ou sua dupla, estiverem na "mão de 10", a mão passa a valer 4 "tentos" por padrão.

- A partida termina quando um jogador, ou dupla de jogadores, atinge 12 "tentos".
