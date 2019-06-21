#include "doctest.h"

#include "joker.h"

TEST_CASE("01 - Testando o construtor") {
	DOCTEST_CHECK_NOTHROW(Joker(1,1));
}

TEST_CASE("02 - Testando os Jokers"){

	Joker joker1 = Joker(10,1);
	Rank joker1Rank = joker1.get_rank();
	Color joker1Color = joker1.get_color();
	DOCTEST_CHECK(joker1Rank == RedJoker);
	DOCTEST_CHECK(joker1Color == Red);

	Joker joker2 = Joker(11,2);
	Rank joker2Rank = joker2.get_rank();
	Color joker2Color = joker2.get_color();
	DOCTEST_CHECK(joker2Rank == BlackJoker);
	DOCTEST_CHECK(joker2Color == Black);

}
