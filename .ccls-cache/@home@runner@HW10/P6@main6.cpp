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
  double MPG = 0, TMPG = 0, AMPG = 0; // miles per gallon and average mpg
  CarStructure car[5];

  for (int i = 0; i < 5; i++) {
    cout << "Enter the numbered car: \n";
    cin >> car[i].CarNumber;
    cout << "Enter number of miles driven: \n";
    cin >> car[i].MilesDriven;
    cout << "Enter number of gallons used: \n";
    cin >> car[i].GallonsUsed;
  }

  cout << setw(10) << "Car Number" << setw(10) << "MPG \n";
  cout << "____________________\n";

  for (int j = 0; j < 5; j++) {
    TMPG = TMPG + ((car[j].MilesDriven) / car[j].GallonsUsed);
    MPG = car[j].MilesDriven / car[j].GallonsUsed;

    cout << setw(6) << car[j].CarNumber << setprecision(2) << setw(15) << MPG
         << endl;
  }
  AMPG = MPG / 5;
  cout << setw(20) << "__________\n";
  cout << setw(20) << AMPG << endl;
}