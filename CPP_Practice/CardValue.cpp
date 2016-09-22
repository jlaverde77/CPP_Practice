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

CardValue::CardValue(std::string value)
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
	else if (val == Three) return 3;
	else if (val == Four) return 4;
	else if (val == Five) return 5;
	else if (val == Six) return 6;
	else if (val == Seven) return 7;
	else if (val == Eight) return 8;
	else if (val == Nine) return 9;
	else if (val == Ten) return 10;
	else if (val == Jack) return 11;
	else if (val == Queen) return 12;
	else if (val == King) return 13;
	else return 14;
}

std::string CardValue::getStringValue(){
	if (myValue == Two) return "2";
	else if (myValue == Three) return "3";
	else if (myValue == Four) return "4";
	else if (myValue == Five) return "5";
	else if (myValue == Six) return "6";
	else if (myValue == Seven) return "7";
	else if (myValue == Eight) return "8";
	else if (myValue == Nine) return "9";
	else if (myValue == Ten) return "10";
	else if (myValue == Jack) return "J";
	else if (myValue == Queen) return "Q";
	else if (myValue == King) return "K";
	else if (myValue == Ace) return "A";
	else if (myValue == JokerSmall) return "S";
	else if (myValue == JokerBig) return "B";
	else return "E";
	
}

int CardValue::getNumValue(){
	return numValue;
}

CardValue::FaceValue CardValue::getFaceValue(){
	return myValue;
}

CardValue::~CardValue()
{
}
