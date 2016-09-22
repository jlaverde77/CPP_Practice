#include "Suit.h"

Suit::Suit(SuitType suit)
{
	mySuit = suit;
}

Suit::Suit(int suit)
{
	switch(suit){
	case 1:
		mySuit = Hearts;
		break;
	case 2:
		mySuit = Clubs;
		break;
	case 3:
		mySuit = Diamonds;
		break;
	default:
		mySuit = Spades;
	}
}

Suit::~Suit()
{

}
