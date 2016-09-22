#pragma once
#include <list>
#include "Card.h"

class Deck
{
public:
	Deck();
	string ListDeck();
	~Deck();

protected:
	int numCards;
	Card *myCards[54];

};

