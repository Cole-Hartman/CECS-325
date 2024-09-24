// Name: Cole Hartman
// Class (CECS 325-01)
// Project Name (Prog 1 – Counting Letters)
// Due Date 19/9/24
//
// I certify that this program is my own original work. I did not copy any part
// of this program from any other source. I further certify that I typed each
// and every line of code in this program.

#include <functional>
#include <iostream>
#ifndef CARD_H
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

#endif
