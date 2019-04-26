# PDSII - TEAM 4

## Truco Mineiro - UserStories

- Uma partida de Truco Mineiro pode ter 2 jogadores, sendo 1 contra 1, ou pode ter 4 jogadores, jogando 2 duplas. No caso de uma partida com 2 duplas, os jogadores de cada dupla sentam-se de forma alternada.

- Cada partida é composta por um número máximo de 11 quedas (também chamadas de "mãos").

- No início de cada queda, cada jogador recebe 3 cartas aleatórias.

- Cada queda vale por padrão 2 "tentos"(pontos), e é composta por 3 rodadas.

- No inicio da primeira rodada um jogador é escolhido aleatoriamente para começar jogando. Sendo que a cada queda o jogador à direita do anterior deve iniciar jogando.

- Para começar, o jogador escolhido na etapa anterior coloca uma carta de sua mão na mesa, podendo desde o inicio pedir truco, ou não.

- Um jogador pode, exceto quando está abrindo a primeira rodada, colocar sua carta virada para baixo na mesa (Uma carta virada para baixo tem valor nulo na rodada atual). 

- Na vez de um jogador colocar uma carta na mesa, se o adversário não pediu truco naquela rodada, o jogador pode pedir truco, ou seguir o jogo normalmente. 

- Se um jogador pede truco, ocorrem duas situações:
	
	1- Se o proximo adversário não aceitar o pedido de truco, então ele perde a queda.
  
	2- Se o proximo adversário  aceitar o pedido de truco, então aquela queda passa a valer 4 "tentos". Sendo possível que, de forma alternada, as duplas podem aumentar o valor do truco para 6, 9, ou 12 "tentos". Note que a cada aumento do valor da queda, uma dupla pode desistir daquela queda, sedendo um valor em pontos igual ao ultimo aumento acordado.

- Quando um jogador, ou sua dupla, possuem 10 "tentos" (também chamada de "mão de 10"), o jogador não é autorizado a pedir truco. Pórem, caso peça, sederá 2 "tentos" ao adversário, pois perderá a queda.

- Quando um jogador, ou sua dupla, estiverem na "mão de 10", a queda passa a valer 4 "tentos" por padrão.

- A partida termina quando um jogador, ou dupla de jogadores, atinge 12 "tentos".
