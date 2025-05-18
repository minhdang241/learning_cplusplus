#include <iostream>
using namespace std;

int main() {
	int year;
	cin >> year;
	bool isLeapYear;
	if (year % 400 == 0) {
		isLeapYear = true;
	}
	else if (year % 100 != 0 && year % 4 == 0) {
		isLeapYear = true;
	}
	else {
		isLeapYear = false;
	}
	cout << year << " is " << (isLeapYear ? "" : "not ") << "a leap year." << endl;
	return 0;
}
