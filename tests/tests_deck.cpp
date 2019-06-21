#include "doctest.h"
#include "deck.h"

TEST_CASE("01 - Testando o construtor") {
	DOCTEST_CHECK_NOTHROW(Deck());
}

TEST_CASE("02 - Testando a funcao que retira uma carta no topo do deck"){
	Deck deck = Deck();
	Card *testCard = deck.draw_card();
	Rank cardRank = testCard->get_rank();
	DOCTEST_CHECK(cardRank == FourOfClubs);
}

