#pragma once
#include <string>

class Suit
{
public:
	enum SuitType{ Joker, Hearts, Clubs, Diamonds, Spades };

	Suit(SuitType);
	Suit(int);
	
	~Suit();
private:
	SuitType mySuit;
	

};

