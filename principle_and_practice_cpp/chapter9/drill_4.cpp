// -----------------------------------------------------------------------------
//
// C9 - Drill 1
//
// Your check for a valid date may be very simple. Feel free to ignore leap years
// Don't accept a month that isn't [1,12] or day that isn't [1, 31]. test each
// with at least one invalid date.
//

#include <iostream>

using namespace std;
enum class Month { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

class Date {
 private:
	int y, d;
	Month m;

 public:
	Date(int y, Month m, int d);

	void add_day(int n);

	Month month() const {
		return m;
	}

	int day() const {
		return d;
	}

	int year() const {
		return y;
	}
};

Date::Date(int yy, Month mm, int dd) {
	int yearMin(1900), yearMax(3000);
	if (yy > yearMax || yy < yearMin)
		cout << "Invalid year.";
	if (mm > Month::dec || mm < Month::jan)
		cout << "Invalid month.";
	if (dd > 31 || dd < 1)
		cout << "Invalid day." << endl;
	else {
		y = yy;
		m = mm;
		d = dd;
	}
}

void Date::add_day(int n) {
	// increase dd by n days
	if (d + n > 31) {
		d = 1;
		auto next_m = static_cast<int>(m) + 1;
		if (next_m > 12) {
			m = Month::jan;
			y++;
		}
		else {
			m = Month(next_m);
		}
	}
	else {
		d += n;
	}
}

ostream& operator<<(ostream& os, const Date& d) {
	return os << "(" << d.year() << "," << static_cast<int>(d.month()) << "," << d.day() << ")";
}

int main() {
	auto today = Date(1978, Month::dec, 31);
	auto tomorrow = today;
	tomorrow.add_day(1);
	cout << today << endl;
	cout << tomorrow << endl;
	auto invalid_date = Date(2024, Month(13), 32);
	return 0;
}
