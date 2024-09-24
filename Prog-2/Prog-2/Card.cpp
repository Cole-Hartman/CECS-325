// Name: Cole Hartman
// Class (CECS 325-01)
// Project Name (Prog 1 – Counting Letters)
// Due Date 19/9/24
//
// I certify that this program is my own original work. I did not copy any part
// of this program from any other source. I further certify that I typed each
// and every line of code in this program.

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
  std::cout << suit << ",";
}

// compare cards
int Card::compare(Card card2) {
  char ranks[] = {'A', '2', '3', '4', '5', '6', '7',
                  '8', '9', 'T', 'J', 'Q', 'K'};

  int card1_index = 0;
  for (int i = 0; i < 13; i++) {
    if (rank == ranks[i]) {
      card1_index = i;
    }
  }

  int card2_index = 0;
  for (int i = 0; i < 13; i++) {
    if (card2.rank == ranks[i]) {
      card2_index = i;
    }
  }

  if (card1_index > card2_index) {
    return 1;
  } else if (card1_index < card2_index) {
    return -1;
  } else {
    return 0;
  };
}
