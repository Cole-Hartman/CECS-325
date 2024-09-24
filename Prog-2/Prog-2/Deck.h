// Name: Cole Hartman
// Class (CECS 325-01)
// Project Name (Prog 1 – Counting Letters)
// Due Date 19/9/24
//
// I certify that this program is my own original work. I did not copy any part
// of this program from any other source. I further certify that I typed each
// and every line of code in this program.

#include "Card.h"
#include <algorithm>
#include <functional>
#include <iostream>
#include <random>
#ifndef DECK_H
#define DECK_H

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
