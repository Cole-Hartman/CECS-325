#include "Deck.h"
#include <cstdlib>
#include <time.h>

Deck::Deck() {
  int index = 0;
  std::string ranks = "A23456789TJQK";
  std::string suits = "CSDH";

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
    c.print();
  }
}

// shuffle the cards in the deck
void Deck::shuffle() {
  srand(time(nullptr)); // seed the random number generator
  for (int i = 51; i > 0; i--) {
    int j = std::rand() % (i + 1);
    std::swap(cards[i], cards[j]);
  }
}
