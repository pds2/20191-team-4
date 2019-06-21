#include "doctest.h"
#include "game.h"

TEST_CASE("01 - Testando o construtor") {
	DOCTEST_CHECK_NOTHROW(Game());
}

TEST_CASE("02 - Testando a incrementacao dos pontos") {
   
   Game game = Game();
   game.setPoints(2);
   int pontos = game.getPoints();
   DOCTEST_CHECK(pontos == 2);
   game.increasePoint();
   pontos = game.getPoints();
   DOCTEST_CHECK(pontos == 4);
   game.increasePoint();
   pontos = game.getPoints();
   DOCTEST_CHECK(pontos == 8);
   game.increasePoint();
   pontos = game.getPoints();
   DOCTEST_CHECK(pontos == 10);
   game.increasePoint();
   pontos = game.getPoints();
   DOCTEST_CHECK(pontos == 12);
}

TEST_CASE("03 - Testando pontuacao das equipes/funcionalidades") {

	Game game = Game();
	game.setScore_t1(6);
	int pontosT1 = game.getScore_t1();
	DOCTEST_CHECK(pontosT1 == 6);

	game.setScore_t2(10);
	int pontosT2 = game.getScore_t2();
	DOCTEST_CHECK(pontosT2 == 10);

	game.setScore_t1(12);
	game.printQuedaWinner();
	pontosT1 = game.getScore_t1();
	pontosT2 = game.getScore_t2();
	int scoreT1 = game.getFinal_scoreboard1();
	DOCTEST_CHECK(pontosT1 == 0);
	DOCTEST_CHECK(scoreT1 == 1);
	game.setFinal_scoreboard2();
	int scoreT2 = game.getFinal_scoreboard2();
	DOCTEST_CHECK(pontosT2 == 0);
	DOCTEST_CHECK(scoreT2 == 1);
	
	game.setFinal_scoreboard1();
	scoreT1 = game.getFinal_scoreboard1();
	DOCTEST_CHECK(scoreT1 == 2);
	DOCTEST_CHECK(game.check_end() == false);
}
