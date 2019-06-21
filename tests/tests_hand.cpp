#include "doctest.h"

#include "hand.h"
#include "usual_card.h"

TEST_CASE("01 - Testando o construtor") {
	Deck deck = Deck();
	deck.shuffle_deck();
	Hand playerHand = Hand(&deck);
	//Deck deck1 = *deck;
	DOCTEST_CHECK_NOTHROW(playerHand);
}


TEST_CASE("02 - Testando numero inicial de cartas na mao"){
	Deck deck = Deck();
	deck.shuffle_deck();
	Hand testHand = Hand(&deck);
	int size = testHand.hand_size();
	DOCTEST_CHECK( size == 3);
}	
