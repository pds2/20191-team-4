# Team 4 - PDS ll 2019/1

## Truco Mineiro :clubs:

**Truco** é um popular jogo de cartas praticado em diversos locais da América do Sul e algumas regiões da Espanha e Itália. No Brasil, foi popularizado por imigrantes italianos, portugueses e espanhóis, a princípio nos estados de São Paulo e Minas Gerais, posteriormente espalhando-se por todo o país e originando diversas variações.

Nesse trabalho, será tratada a variação mineira do jogo.

### Regras do Jogo

##### Número de jogadores

O jogo pode ter 2 jogadores, sendo um contra um, ou pode ter quatro jogadores, sendo assim duas duplas.


##### Ordem das Cartas

O truco mineiro utiliza o baralho francês sem as cartas 8, 9, 10 e curinga, totalizando 40 cartas.

As quatro cartas mais altas do jogo são chamadas de manilhas, conforme ordem abaixo:

- 4 de :clubs: (Zap)
- 7 de :hearts: (7copas)
- Ás de :spades: (Espadilha)
- 7 de :diamonds: (7ouros)

Em seguida, vem as outras cartas, na seguinte ordem:

- 3 (Todos os naipes)
- 2 (Todos os naipes)
- A (Todos os naipes, exceto :spades: que é manilha)
- K (Todos os naipes)
- J (Todos os naipes)
- Q (Todos os naipes)
- 7 (Somente :clubs: e :spades:)
- 6 (Todos os naipes)
- 5 (Todos os naipes)
- 4 (Todos os naipes, exceto :clubs: que é manilha)


##### Princípios Básicos

###### Partida
No início da partida as cartas são embaralhadas. Após embaralhar, cada jogador recebe 3 cartas e em seguida uma pessoa começa jogando uma carta na mesa. A vez de iniciar é alternada a cada partida.

Depois que uma carta é lançada na mesa pelo primeiro jogador, o adversário a esquerda desse precisa mandar a carta dele. Depois que todos jogaram uma carta, a mão é finalizada. Ganha a mão o jogador ou dupla que mandou a carta de maior valor. Quem conseguir vencer 2 mãos ganha a rodada e recebe 2 pontos.

###### Jogo
Terminada a rodada, uma nova é iniciada, embaralhando e distribuíndo as cartas. Isso ocorre até que um dos jogadores (ou dupla) complete 12 pontos. Quando um jogador completa 12 pontos ele vence um jogo e todos tem os pontos zerados. 

A cada 2 jogos ganhos, marca-se uma queda e zera os jogos e pontos de todos.

###### Empate
Quando as cartas jogadas tem o mesmo valor ocorre o empate.
Se ocorrer na primeira mão, quem empatou deve mostrar a maior carta. Em seguida o adversário. O jogador com a maior carta ganha. Caso ocorra empate novamente os jogadores devem mostrar a terceira carta.
Quando o empate ocorre na segunda ou na terceira mão, ganha quem fez a primeira.


##### Truco, seis, nove, doze

Quando um dos jogadores pede truco ele está pedindo para aumentar o valor da mão para 4 pontos. O adversário pode aceitar ou correr. Se aceitar, a mão fica valendo 4, ao invés de 2. Se correr, a mão acaba sem ninguém mostrar mais as cartas e quem pediu truco ganha 2 pontos.
Se uma pessoa truca, somente o adversário pode ainda aumentar o valor, pedindo seis a qualquer momento. A mão fica, dessa forma, valendo 8 pontos, mas somente se o outro aceitar. Quando um jogador não aceita o seis e corre ele perde a mão, que está valendo 4 pontos.
Da mesma forma acontece com o nove que vale 10 pontos e o doze vale 12 pontos.

Observação: Esta contagem dos pontos, de pedir seis e ficar valendo 8 e pedir nove e valer 10 pode causar estranhamento, porém é assim que se é jogado no truco mineiro.


##### Mão de 10

É chamada de mão de 10 a mão em que algum dos jogadores possui 10 pontos. Não se pode pedir truco na mão de 10.
Se alguém esquecer e pedir truco perde a mão.

No início do jogo quem está com 10 pontos pode decidir se joga ou não ao receber as cartas.
Se ela opta por não jogar, seu adversário ganha apenas 2 pontos. Se ela jogar e perder, o adversário ganha 4.

## Documentacão
  Neste projeto, foram criadas algumas bibliotecas com implementações que estabelecem as estruturas e métodos essenciais para o andamento do jogo que o grupo se propôs a criar. A seguir, serão explicadas a importância de cada biblioteca para o projeto: 
  ##### "Card"
  Aqui são estabelecidos os possíveis Ranks(Pontuações) inerentes as cartas que constituem o jogo. A seguir, as cartas são criadas, e cada uma recebe seu respectivo valor, com o auxílio da classe Card.
  
  ##### "UsualCard"
  As "UsualCard" são as cartas comuns do jogo, que não possuem valor significativa e dessa forma não são de grande impacto na estrutura do game. Nessa biblioteca, essas cartas são geradas com o auxílio da classe Card descrita acima, onde as UsualCard recebendem dessa classe o Rank, e atribuem a ela um Suit(naipe).
  
  ##### "Joker"
  O Joker é um tipo especial de carta, que herda um Rank da classe Card de acordo com sua cor. Em sua classe, o Joker atribui o valor máximo ao BlackJoker, sendo então o RedJoker a segunda maior carta do jogo. 
  
  ##### "Deck"
  O Deck é constituido por um vetor de Cards. Na classe, além da criação do vetor, que possui acesso privado, são criados métodos para embaralar as cartas, puxar uma carta do topo do deck e exibir a mesma.
  
  ##### "Hand"
  A Hand gera também um vetor de Cards, de 3 posições. Ela se utiliza da classe Deck, na qual são puxadas 3 cardas do top do deck, e as mesmas são incluidas na mão do jogador.
