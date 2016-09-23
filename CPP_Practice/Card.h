#pragma once
#include "CardValue.h"
#include "Suit.h"

class Card
{
public:
	Card(int suit, int value);
	Card(int suit, int value, int deckOrder);
	Card(int suit, string value);
	Card(Suit::SuitType suit, CardValue::FaceValue);
	~Card();

	void HideCard();
	void ShowCard();
	void FlipCard();
	void SetOriginalOrder(int o);
	int getOriginalOrder(){
		return origOrder;
	}
	
	string ReadCard();

private:
	bool isShown;
	Suit *mySuit;
	CardValue *myCardValue;
	int origOrder;
};

