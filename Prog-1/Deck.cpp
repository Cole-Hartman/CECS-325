#include "Deck.h"
#include <cstdlib>
#include <time.h>

// constructor which creates a deck of 52 cards
Deck::Deck() {
  int index = 0;
  std::string ranks = "A23456789TJQK";
  std::string suits = "SCDH";

  // for char in suits
  for (char s : suits) {
    for (char r : ranks) {
      cards[index++] = Card(r, s);
    }
  }
}

// deal a card
Card Deck::deal() {
  Card card = cards[currentCard];
  currentCard++;
  return card;
}

// show all the cards in the deck
void Deck::print() {
  for (Card c : cards) {
    std::cout << c.rank << c.suit;
  }
}

// shuffle the cards in the deck
void Deck::shuffle() {
  for (int i; i < 52; i++) {
    srand(time(0));
    int num = rand() % 52;
    Card store = cards[i];
    cards[i] = cards[num];
    cards[num] = store;
  }
}
