// Name: Cole Hartman
// Class (CECS 325-02)
// Project Name (Prog 3 – Sorting Contest)
// Due Date 10/15/24
//
// I certify that this program is my own original work. I did not copy any part
// of this program from any other source. I further certify that I typed each
// and every line of code in this program.

#include <fstream>  // file stream
#include <iostream> // input output stream
using namespace std;

// generate a file called numbers.dat
// numbers.dat will have COUNT random numbers between MIN and MAX.
// generate COUNT MIN MAX
// If there are not 3 cli arguments, the program fails and prints the error

// argc: # of arguments
// argv: the arguments
int main(int argc, char *argv[]) {
  if (argc != 4) {
    cout << "Please enter 6 parameters:\n";
    cout << "    Parameter 1: total count of numbers you want.\n";
    cout << "    Parameter 2: min value.\n";
    cout << "    Parameter 3: max value.\n";
    cout << "Example: generate 1000000 100000 999999\n";
    exit(EXIT_SUCCESS);
  }

  for (int i = 0; i < argc; i++) {
    cout << argv[i] << endl;
  }

  int COUNT = stoi(argv[1]);
  int MIN = stoi(argv[2]);
  int MAX = stoi(argv[3]);

  ofstream fout;
  fout.open("numbers.dat", ios::out);
  for (int i = 0; i < COUNT; i++) {
    fout << (rand() % (MAX - MIN + 1) + MIN) << endl;
  }
  fout.close();
  return 0;
}
