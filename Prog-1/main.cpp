/*
 * Honor Statement
 *
 * Name: Cole Hartman
 * Course: CECS 325
 * Assignment: Project 1
 *
 * I, Cole Hartman, declare that all work presented in this assignment is my
 * own, and I have properly acknowledged all external sources (if any) that were
 * used.
 *
 * Signed: Cole Hartman
 */

#include "Deck.h"
#include <iostream>
#include <ostream>
using namespace std;

int main() {
  Deck deck = Deck();

  string player1;
  string player2;
  cout << "Enter the name of the first player: ";
  cin >> player1;
  cout << "Enter the name of the second player: ";
  cin >> player2;
  cout << endl;

  cout << "Original Deck" << endl;
  deck.print();
  cout << endl;
  cout << endl;
  deck.shuffle();
  cout << "Shuffled Deck" << endl;
  deck.print();
  cout << endl;
  cout << endl;

  // Play 26 games
  int player1_wins = 0;
  int player2_wins = 0;
  int ties = 0;
  for (int i = 1; i < 27; i++) {
    cout << "Game " << i << endl;
    cout << "--------" << endl;

    Card deal1 = deck.deal();
    cout << "      " << player1 << "=>";
    deal1.print();
    cout << endl;

    Card deal2 = deck.deal();
    cout << "      " << player2 << "=>";
    deal2.print();
    cout << endl;

    // compute winner
    int res = deal1.compare(deal2);
    if (res == 1) {
      player1_wins++;
      cout << player1 << "=> Winner" << endl;
    } else if (res == -1) {
      player2_wins++;
      cout << player2 << "=> Winner" << endl;
    } else if (res == 0) {
      ties++;
      cout << "Tie game" << endl;
    }
    cout << endl;
  }

  // final stats
  cout << "------Final Stats------" << endl;
  cout << "      " << player1 << " vs. " << player2 << endl;
  cout << "Wins    " << player1_wins << "     " << player2_wins << endl;
  cout << "Losses  " << player2_wins << "     " << player1_wins << endl;
  cout << "Ties    " << ties << "     " << ties << endl;

  return 0;
}
