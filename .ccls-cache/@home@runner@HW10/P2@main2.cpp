

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  string month, day, year;
  int HOUR, MIN, hour1, hour2, min1, min2;

  cin >> hour1;
  cin.ignore();
  cin >> min1;

  cin >> hour2;
  cin.ignore();
  cin >> min2;

  HOUR = hour2 - hour1;

  if (min2 - min1 < 0) {
    MIN = (min2 - min1) + 60;
  } else {
    MIN = min2 - min1;
  }

  cout << month << " " << day << " " << year << " ";
  cout << HOUR << " " << MIN << endl;
}