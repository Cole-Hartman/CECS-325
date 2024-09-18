#include "Deck.h"
#include <iostream>

int main() {
  Deck deck = Deck();

  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;

  deck.print();

  return 0;
}
