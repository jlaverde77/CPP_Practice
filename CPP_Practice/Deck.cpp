#include "Deck.h"


Deck::Deck()
{
	CreateDeckNoJk();
}

Deck::Deck(deckType dt){
	if (dt == NoJokers){
		CreateDeckNoJk();
	}
	else{
		CreateDeckWithJk();
	}
}

void Deck::CreateDeckNoJk(){
	int currCard = 0;

	numCards = 52;

	for (int x = 1; x < 5; x++){
		for (int y = 2; y <= 14; y++){
			myCards.push_back(Card(x, y, currCard++));
		}
	}

}


void Deck::CreateDeckWithJk(){
	CreateDeckNoJk();

	numCards = 54;
	myCards.push_back(Card(0, -1, 52));
	myCards.push_back(Card(0, -2, 53));
}


string Deck::ListDeck(){
	string myDeckList = "{";

	for (int x = 0; x < numCards; x++){
		myCards[x].ShowCard();
		myDeckList += myCards[x].ReadCard() + ", ";
	}
	myDeckList += "}";

	return myDeckList;
}

//using Fisher-Yates Shuffle Algorithm
void Deck::Shuffle(){
	srand(time(NULL));
	int tempRandom = 0;
	
	for (int x = numCards - 1; x > 0; x--){
		tempRandom = rand() % x;
		if (tempRandom != x){
			Card tempCard = myCards[x];
			myCards[x] = myCards[tempRandom];
			myCards[tempRandom] = tempCard;
		}
	}
}

void Deck::QuickSort(){
	QuickSort(0, numCards - 1);
}

void Deck::QuickSort(int left, int right){
	int i = left, j = right;
	int pivot = myCards[(left + right) / 2].getOriginalOrder();

	/* partition */
	while (i <= j) {
		while (myCards[i].getOriginalOrder() < pivot)
			i++;
		while (myCards[j].getOriginalOrder() > pivot)
			j--;
		if (i <= j) {
			Card tmp = myCards[i];
			myCards[i] = myCards[j];
			myCards[j] = tmp;
			i++;
			j--;
		}
	};

	/* recursion */
	if (left < j)
		QuickSort(left, j);
	if (i < right)
		QuickSort(i, right);
}

Deck::~Deck()
{
}
