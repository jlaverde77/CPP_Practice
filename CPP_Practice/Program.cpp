#include <iostream>
#include "Program.h"
#include "Deck.h"
int main(){
	
	Deck *d1 = new Deck();
	cout << d1->ListDeck() << endl << endl;

	d1->Shuffle();
	cout << d1->ListDeck() << endl << endl;

	d1->QuickSort();
	cout << d1->ListDeck() << endl << endl;
	
	system("PAUSE");
}

Program::Program()
{
}


Program::~Program()
{
}
