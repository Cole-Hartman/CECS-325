#include <functional>
#include <iostream>
using namespace std;

class Card {

public:
  Card(char, char) // constructor to create a card, setting the suit and rank
      Card()       // default Card needed for array
      void print() // display the card example: AC, 10S, KD
      int compare(Card) // return 1 for win, 0 for tie, -1 for lose
};
