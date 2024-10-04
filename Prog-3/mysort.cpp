// Name: Cole Hartman
// Class (CECS 325-02)
// Project Name (Prog 3 – Sorting Contest)
// Due Date 10/15/24
//
// I certify that this program is my own original work. I did not copy any part
// of this program from any other source. I further certify that I typed each
// and every line of code in this program.

#include <fstream>
#include <iostream>
using namespace std;

// read numbers from input file numbers.dat, sort, write sorted numbers to
// output file.

int main(int argc, char *argv[]) {

  ifstream fin;
  ofstream fout;
  int n;
  int count = 0;

  fin.open(argv[1]);
  fout.open(argv[2], ios::out | ios::trunc);
  while (fin >> n) {
    fout << n << endl;
    count++; // insert a number into the array and increase the index
  }

  fout.close();
}
