// Name: Cole Hartman
// Class (CECS 325-02)
// Project Name (Prog 2 – More War)
// Due Date 10/01/24
//
// I certify that this program is my own original work. I did not copy any part
// of this program from any other source. I further certify that I typed each
// and every line of code in this program.

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <random>
#include <stdexcept>
#include <vector>
using namespace std;

class Card {
private:
  char suit;
  char rank;

public:
  // constructor to create a card, setting the suit and rank
  Card(char r, char s) {
    rank = r;
    suit = s;
  }

  // display the card
  void print() {
    if (rank == 'T') {
      cout << "10";
    } else {
      cout << rank;
    }
    cout << suit << ",";
  }

  // compare cards, 1 for win, 0 for tie, -1 for lose
  int compare(Card card2) {
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
};

class Deck {

private:
  vector<Card> cards;

public:
  Deck() {
    string ranks = "A23456789TJQK";
    string suits = "CSDH";

    // for char in suits
    for (char s : suits) {
      for (char r : ranks) {
        cards.emplace_back(r, s);
      }
    }
  }

  // deal a card, if deck is empty then raise exception
  Card deal() {
    if (isEmpty()) {
      throw runtime_error("Deck is empty");
    }
    Card card = cards.back();
    cards.pop_back();
    return card;
  }

  // show all the cards in the deck
  void print() {
    for (Card c : cards) {
      c.print();
    }
  }

  // shuffle the cards in the deck
  void shuffle() {
    random_device rd;
    mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
  }

  // return true if deck is empty
  bool isEmpty() { return cards.empty(); }
};

int main() {
  Deck deck = Deck();

  string player1;
  string player2;
  cout << "Enter the name of the first player: ";
  cin >> player1;
  cout << "Enter the name of the second player: ";
  cin >> player2;

  int numgames;
  cout << "How many games will they play: ";
  cin >> numgames;
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

  // Play (numgames) games
  int player1_wins = 0;
  int player2_wins = 0;
  int ties = 0;
  for (int i = 1; i < numgames + 1; i++) {
    Card deal1(0, 0);
    try {
      deal1 = deck.deal();

      cout << "Game " << i << endl;
      cout << "--------" << endl;

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

    } catch (const runtime_error &e) {
      cout << "Error - " << e.what() << endl;
      break;
    }
  }

  // final stats
  cout << "------Final Stats------" << endl;
  cout << "      " << player1 << " vs. " << player2 << endl;
  cout << "Wins    " << player1_wins << "     " << player2_wins << endl;
  cout << "Losses  " << player2_wins << "     " << player1_wins << endl;
  cout << "Ties    " << ties << "     " << ties << endl;

  return 0;
}
