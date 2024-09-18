#include <functional>
#include <iostream>
#ifndef CARD
#define CARD

class Card {
public:
  char suit;
  char rank;

  Card(char r, char s);
  Card();
  void print();
  int compare(Card card2);
};

#endif
