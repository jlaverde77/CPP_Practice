#include "CardValue.h"


CardValue::CardValue(int value)
{
	switch (value){
	case -2:
		myValue = JokerBig;
		break;
	case -1:
		myValue = JokerSmall;
		break;
	case 2:
		myValue = Two;
		break;
	case 3:
		myValue = Three;
		break;
	case 4:
		myValue = Four;
		break;
	case 5:
		myValue = Five;
		break;
	case 6:
		myValue = Six;
		break;
	case 7:
		myValue = Seven;
		break;
	case 8:
		myValue = Eight;
		break;
	case 9:
		myValue = Nine;
		break;
	case 10:
		myValue = Ten;
		break;
	case 11:
		myValue = Jack;
		break;
	case 12:
		myValue = Queen;
		break;
	case 13:
		myValue = King;
		break;
	default:
		myValue = Ace;
		
	}

	numValue = setNumValue(myValue);
}

CardValue::CardValue(string value)
{
	if (value == "2") myValue = Two;
	else if (value == "3") myValue = Three;
	else if (value == "4") myValue = Four;
	else if (value == "5") myValue = Five;
	else if (value == "6") myValue = Six;
	else if (value == "7") myValue = Seven;
	else if (value == "8") myValue = Eight;
	else if (value == "9") myValue = Nine;
	else if (value == "10") myValue = Ten;
	else if (value == "J") myValue = Jack;
	else if (value == "Q") myValue = Queen;
	else if (value == "K") myValue = King;
	else if (value == "JS") myValue = JokerSmall;
	else if (value == "JB") myValue = JokerBig;
	else myValue = Ace;

	numValue = setNumValue(myValue);
	
}

CardValue::CardValue(FaceValue value)
{
	myValue = value;
	numValue = setNumValue(myValue);

}

int CardValue::setNumValue(FaceValue val){
	if (val == Two) return 2;
	if (val == Three) return 3;
	if (val == Four) return 4;
	if (val == Five) return 5;
	if (val == Six) return 6;
	if (val == Seven) return 7;
	if (val == Eight) return 8;
	if (val == Nine) return 9;
	if (val == Ten) return 10;
	if (val == Jack) return 11;
	if (val == Queen) return 12;
	if (val == King) return 13;
	else return 14;
}

int CardValue::getNumValue(){
	return numValue;
}

CardValue::~CardValue()
{
}
