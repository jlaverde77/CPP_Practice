#pragma once
#include <vector>
#include <ctime>
#include "Card.h"

class Deck
{
public:
	enum deckType{NoJokers, WithJokers};
	
	Deck();
	Deck(deckType);
	
	string ListDeck();
	void Shuffle();
	void QuickSort();
	void QuickSort(int left, int right);
	~Deck();

protected:
	int numCards;
	std::vector<Card> myCards;
	void CreateDeckNoJk();
	void CreateDeckWithJk();

};

