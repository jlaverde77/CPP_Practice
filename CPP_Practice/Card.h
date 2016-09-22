#pragma once
#include "CardValue.h"
#include "Suit.h"

class Card
{
public:
	Card(int suit, int value);
	Card(int suit, string value);
	Card(Suit::SuitType suit, CardValue::FaceValue);
	~Card();

	void HideCard();
	void ShowCard();
	void FlipCard();
	
	string ReadCard();

private:
	bool isShown;
	Suit *mySuit;
	CardValue *myCardValue;
};

