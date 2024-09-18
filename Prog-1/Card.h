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

  // Return 1 for win, 0 for tie, -1 for lose
  // int compare(Card) {
  //   // pass
  // }
};
