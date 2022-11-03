#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
// part A
struct CarStructure {
  int CarNumber;
  double MilesDriven;
  double GallonsUsed;
} car;

int main() {
  // part B
  double MPG = 0, AMPG; // miles per gallon and average mpg
  CarStructure car[5];

  for (int i = 0; i < 5; i++) {
    cout << "Enter the numbered car: \n";
    cin >> car[i].CarNumber;
    cout << "Enter number of miles driven: \n";
    cin >> car[i].MilesDriven;
    cout << "Enter number of gallons used: \n";
    cin >> car[i].GallonsUsed;
  }

  cout << setw(15) << "Car Number"
       << "MPG \n";
  cout << "******************************\n";

  for (int j = 0; j < 5; j++)
    {
      MPG = += 
    }
}