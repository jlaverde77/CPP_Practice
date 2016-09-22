#include <iostream>
#include "Program.h"
#include "Deck.h"
int main(){
	
	Deck *d = new Deck();
	cout << d->ListDeck() << endl;
	

	
	system("PAUSE");
}

Program::Program()
{
}


Program::~Program()
{
}
