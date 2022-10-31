#include <iostream>

using namespace std;

const int ROWS = 2;
const int COLS = 3;

void arr(int[][COLS]);

int main() {
  int nums[ROWS][COLS] = {{33, 16, 29}, {54, 67, 99}};
  
  arr(nums);
  
  return 0;
}

void arr(int (*val)[3]) {
  cout << endl << *(*val);
  cout << endl << *(*val + 1);
  cout << endl << *(*(val + 1) + 2);
  cout << endl << *(*val) + 1;
  
  return;
}
/*
Question: Given the declaration for val in the arr() function, is the notation val[1][2] valid in the
function?

Answer:
Yes. Arrays and pointers behave similarly. We can use pointers to access arrays because array names are converted to pointers. Because of this, pointers and arrays are interchangable in function format/notation
*/