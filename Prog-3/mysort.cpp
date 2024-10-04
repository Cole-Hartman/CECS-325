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
// example: ./mysort numbers.dat testsort.dat

const int MAX_SIZE = 1000000;

void bubble(int A[], int size) {
  cout << "Starting Array bubble sort with 1000000 items" << endl;
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - 1; j++) {
      if (A[j] > A[j + 1]) {
        int temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }
  cout << "Ending bubble sort" << endl;
}

int main(int argc, char *argv[]) {

  ifstream fin;
  ofstream fout;
  int n;
  int count = 0;
  int numbers[MAX_SIZE];

  fin.open(argv[1]);
  // open the second argument, set output file, if file exists, write over
  fout.open(argv[2], ios::out | ios::trunc);
  while (fin >> n && count < MAX_SIZE) {
    numbers[count] = n;
    count++; // insert a number into the array and increase the index
  }

  // call bubble
  bubble(numbers, count);

  for (int i = 0; i < count; i++) {
    fout << numbers[i] << endl;
  }

  fout.close();
  fin.close();

  return 0;
}
