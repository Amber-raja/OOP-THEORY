#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Card {
    int face;
    int suit;
    static string faceNames[13];
    static string suitNames[4];

public:
    Card(int cardFace = 0, int cardSuit = 0);
    string toString();
};

string Card::faceNames[13] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
string Card::suitNames[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };

Card::Card(int cardFace, int cardSuit) {
    face = cardFace;
    suit = cardSuit;
}

string Card::toString() {
    return faceNames[face] + " of " + suitNames[suit];
}

class DeckOfCards {
    Card deck[52];
    int currentCard;

public:
    DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCards();
};

DeckOfCards::DeckOfCards() {
    currentCard = 0;
    int count = 0;
    for (int suit = 0; suit < 4; suit++) {
        for (int face = 0; face < 13; face++) {
            deck[count] = Card(face, suit);
            count++;
        }
    }
}

void DeckOfCards::shuffle() {
    currentCard = 0;
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < 52; i++) {
        int randomIndex = rand() % 52;
        Card temp = deck[i];
        deck[i] = deck[randomIndex];
        deck[randomIndex] = temp;
    }
}

Card DeckOfCards::dealCard() {
    if (currentCard > 51) {
        shuffle();
    }
    return deck[currentCard++];
}

bool DeckOfCards::moreCards() {
    return currentCard <= 51;
}

int main() {
    DeckOfCards cardDeck;
    cardDeck.shuffle();
    int cardCount = 1;
    while (cardDeck.moreCards()) {
        cout << cardCount << ": " << cardDeck.dealCard().toString() << endl;
        cardCount++;
    }

    return 0;
}
