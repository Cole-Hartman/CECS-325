#include <functional>
#include <iostream>
#define CARD_H

class Card {
public:
  char suit;
  char rank;

  Card(char r, char s);
  Card();
  void print();
  int compare(Card card2);
};
