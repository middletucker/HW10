

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  string month, day, year;
  int HOUR, MIN, hour1, hour2, min1, min2;

  while (cin >> month && cin >> day && cin >> year) {
    cin >> hour1;
    cin.ignore();
    cin >> min1;

    cin >> hour2;
    cin.ignore();
    cin >> min2;

    HOUR = hour2 - hour1;

    if (min2 - min1 < 0) {
      MIN = (min2 - min1) + 60;
      HOUR = HOUR - 1;
    } else {
      MIN = min2 - min1;
    }

    cout << month << " " << day << " " << year << " ";
    cout << HOUR << " hours " << MIN << " minutes" << endl;
  }
}
/*
https://stackoverflow.com/questions/29381224/c-cin-until-no-more-input-on-line-using-a-while-loop
*/