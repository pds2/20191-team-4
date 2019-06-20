#include "doctest.h"

#include "usual_card.h"

TEST_CASE("01 - Testando o construtor") {
	DOCTEST_CHECK_NOTHROW(UsualCard(1,1));
}


TEST_CASE("02 - Testando as cartas/Ranks e Naipes"){
	UsualCard card1 = UsualCard(1,1);
	Suits card1Suit = card1.get_suit();
	Rank card1Rank = card1.get_rank();
	DOCTEST_CHECK(card1Rank == Four);
	DOCTEST_CHECK(card1Suit == Clubs);

	UsualCard card2 = UsualCard(1,2);
	Suits card2Suit = card2.get_suit();
	Rank card2Rank = card2.get_rank();
	DOCTEST_CHECK(card2Rank == Four);
	DOCTEST_CHECK(card2Suit == Hearts);

	UsualCard card3 = UsualCard(1,3);
	Suits card3Suit = card3.get_suit();
	Rank card3Rank = card3.get_rank();
	DOCTEST_CHECK(card3Rank == Four);
	DOCTEST_CHECK(card3Suit == Spades);

	UsualCard card4 = UsualCard(1,4);
	Suits card4Suit = card4.get_suit();
	Rank card4Rank = card4.get_rank();
	DOCTEST_CHECK(card4Rank == Four);
	DOCTEST_CHECK(card4Suit == Diamonds);

	UsualCard card5 = UsualCard(2,1);
	Suits card5Suit = card5.get_suit();
	Rank card5Rank = card5.get_rank();
	DOCTEST_CHECK(card5Rank == Five);
	DOCTEST_CHECK(card5Suit == Clubs);

	UsualCard card6 = UsualCard(3,1);
	Suits card6Suit = card6.get_suit();
	Rank card6Rank = card6.get_rank();
	DOCTEST_CHECK(card6Rank == Six);
	DOCTEST_CHECK(card6Suit == Clubs);
	

	UsualCard card7 = UsualCard(4,1);
	Suits card7Suit = card7.get_suit();
	Rank card7Rank = card7.get_rank();
	DOCTEST_CHECK(card7Rank == Seven);
	DOCTEST_CHECK(card7Suit == Clubs);
	

	UsualCard card8 = UsualCard(5,1);
	Suits card8Suit = card8.get_suit();
	Rank card8Rank = card8.get_rank();
	DOCTEST_CHECK(card8Rank == Queen);
	DOCTEST_CHECK(card8Suit == Clubs);

	UsualCard card9 = UsualCard(6,1);
	Suits card9Suit = card9.get_suit();
	Rank card9Rank = card9.get_rank();
	DOCTEST_CHECK(card9Rank == Jack);
	DOCTEST_CHECK(card9Suit == Clubs);

	UsualCard card10 = UsualCard(7,1);
	Suits card10Suit = card10.get_suit();
	Rank card10Rank = card10.get_rank();
	DOCTEST_CHECK(card10Rank == King);
	DOCTEST_CHECK(card10Suit == Clubs);

	UsualCard card11 = UsualCard(8,1);
	Suits card11Suit = card11.get_suit();
	Rank card11Rank = card11.get_rank();
	DOCTEST_CHECK(card11Rank == Ace);
	DOCTEST_CHECK(card11Suit == Clubs);

	UsualCard card12 = UsualCard(9,1);
	Suits card12Suit = card12.get_suit();
	Rank card12Rank = card12.get_rank();
	DOCTEST_CHECK(card12Rank == Two);
	DOCTEST_CHECK(card12Suit == Clubs);

	UsualCard card13 = UsualCard(10,1);
	Suits card13Suit = card13.get_suit();
	Rank card13Rank = card13.get_rank();
	DOCTEST_CHECK(card13Rank == Three);
	DOCTEST_CHECK(card13Suit == Clubs);

}


TEST_CASE("03 - Testando as manilhas/Ranks e Naipes"){
	UsualCard manilhaCard1 = UsualCard(11,4);
	Suits manilhaCard1Suit = manilhaCard1.get_suit();
	Rank manilhaCard1Rank = manilhaCard1.get_rank();
	DOCTEST_CHECK(manilhaCard1Rank == SevenOfDiamonds);
	DOCTEST_CHECK(manilhaCard1Suit == Diamonds);

	UsualCard manilhaCard2 = UsualCard(12,3);
	Suits manilhaCard2Suit = manilhaCard2.get_suit();
	Rank manilhaCard2Rank = manilhaCard2.get_rank();
	DOCTEST_CHECK(manilhaCard2Rank == AceOfSpades);
	DOCTEST_CHECK(manilhaCard2Suit == Spades);

	UsualCard manilhaCard3 = UsualCard(13,2);
	Suits manilhaCard3Suit = manilhaCard3.get_suit();
	Rank manilhaCard3Rank = manilhaCard3.get_rank();
	DOCTEST_CHECK(manilhaCard3Rank == SevenOfHearts);
	DOCTEST_CHECK(manilhaCard3Suit == Hearts);

	UsualCard manilhaCard4 = UsualCard(14,1);
	Suits manilhaCard4Suit = manilhaCard4.get_suit();
	Rank manilhaCard4Rank = manilhaCard4.get_rank();
	DOCTEST_CHECK(manilhaCard4Rank == FourOfClubs);
	DOCTEST_CHECK(manilhaCard4Suit == Clubs);
}

