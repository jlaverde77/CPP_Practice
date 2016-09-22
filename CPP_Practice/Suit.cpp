#include "Suit.h"

Suit::Suit(SuitType suit)
{
	mySuit = suit;
}

Suit::Suit(int suit)
{
	switch(suit){
	case 0:
		mySuit = Joker;
		break;
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

string Suit::getStringValue(){
	switch (mySuit){
	case 0:
		return "Joker";
		break;
	case 1:
		return "Hearts";
		break;
	case 2:
		return "Clubs";
		break;
	case 3:
		return "Diamonds";
		break;
	case 4:
		return "Spades";
		break;
	default:
		return "Error";
	}
}

string Suit::getShortValue(){

	switch (mySuit){
	case 0:
		return "J";
		break;
	case 1:
		return "H";
		break;
	case 2:
		return "C";
		break;
	case 3:
		return "D";
		break;
	case 4:
		return "S";
		break;
	default:
		return "E";
	}
}

Suit::~Suit()
{

}
