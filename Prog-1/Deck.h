#include "Card.h"
#include <algorithm>
#include <functional>
#include <iostream>
#include <random>
#ifndef DECK
#define DECK

class Deck {
private:
  static const int deckSize = 52;
  Card cards[deckSize];
  int currentCard = 0;

public:
  Deck();
  Card deal();
  void print();
  void shuffle();
};

#endif
