#pragma once
#include <string>

using namespace std;

class Suit
{
public:
	enum SuitType{ Joker, Hearts, Clubs, Diamonds, Spades };

	Suit(SuitType);
	Suit(int);
	~Suit();

	string getStringValue();
	string getShortValue();

	
private:
	SuitType mySuit;
	

};

