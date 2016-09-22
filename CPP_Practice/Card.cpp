#include "Card.h"

Card::Card(int suit, int value){
	mySuit = new Suit(suit);
	myCardValue = new CardValue(value);
}

Card::Card(int suit, string value){
	mySuit = new Suit(suit);
	myCardValue = new CardValue(value);
}

Card::Card(Suit::SuitType suit, CardValue::FaceValue value){
	mySuit = new Suit(suit);
	myCardValue = new CardValue(value);
}

void Card::HideCard(){
	isShown = false;
}

void Card::ShowCard(){
	isShown = true;
}

void Card::FlipCard(){
	isShown = !isShown;
}

string Card::ReadCard(){
	return "" + mySuit->getShortValue() + myCardValue->getStringValue();
}

Card::~Card()
{
}
