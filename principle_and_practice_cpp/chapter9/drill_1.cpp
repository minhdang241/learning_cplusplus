// -----------------------------------------------------------------------------
//
// C9 - Drill 1
//
// Your check for a valid date may be very simple. Feel free to ignore leap years
// Don't accept a month that isn't [1,12] or day that isn't [1, 31]. test each
// with at least one invalid date.
//
// -----------------------------------------------------------------------------

#include <iostream>

using namespace std;

struct Date {
	Date(int y, int m, int d);

	int y;
	int m;
	int d;
};

// -----------------------------------------------------------------------------

Date::Date(int yy, int mm, int dd) {
	int yearMin(1900), yearMax(3000);
	if (yy > yearMax || yy < yearMin)
		cout << "Invalid year.";
	if (mm > 12 || mm < 1)
		cout << "Invalid month.";
	if (dd > 31 || dd < 1)
		cout << "Invalid day." << endl;
	else {
		y = yy;
		m = mm;
		d = dd;
	}
}

// -----------------------------------------------------------------------------

void add_day(Date& dd, int n) {
	// increase dd by n days
	dd.d += n;
}

// -----------------------------------------------------------------------------

ostream& operator<<(ostream& os, const Date& d) {
	return os << "(" << d.y << "," << d.m << "," << d.d << ")";
}

int main() {
	auto today = Date(1978, 6, 25);
	auto tomorrow = today;
	add_day(tomorrow, 1);
	cout << today << endl;
	cout << tomorrow << endl;

	auto invalid_date = Date(2024, 13, 32);
	return 0;
}
