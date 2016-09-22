#pragma once
#include <string>

class CardValue
{
public:
	enum FaceValue{JokerSmall, JokerBig, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace};
	
	CardValue(int);
	CardValue(std::string);
	CardValue(FaceValue);

	int getNumValue();
	std::string getStringValue();
	FaceValue getFaceValue();
	~CardValue();

private:
	int numValue;
	FaceValue myValue;
	int setNumValue(FaceValue);
};

