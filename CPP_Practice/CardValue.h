#pragma once
#include <string>
using namespace std;

class CardValue
{
public:
	enum FaceValue{JokerSmall, JokerBig, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace};
	CardValue(int);
	CardValue(string);
	CardValue(FaceValue);

	int getNumValue();
	FaceValue getFaceValue();
	~CardValue();

private:
	int numValue;
	FaceValue myValue;
	int setNumValue(FaceValue);
};

