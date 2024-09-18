#include "Card.h"

// constructor to create a card, setting the suit and rank
Card::Card(char r, char s) {
  rank = r;
  suit = s;
}

// default constructor, needed for array
Card::Card() {
  rank = '0';
  suit = '0';
}

// display the card
void Card::print() {
  if (rank == 'T') {
    std::cout << "10";
  } else {
    std::cout << rank;
  }
  std::cout << suit;
}
