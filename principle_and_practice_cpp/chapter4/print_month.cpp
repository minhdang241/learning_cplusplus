#include <unordered_map>
#include <iostream>
using namespace std;

int main() {
	string abbreviation;
	cin >> abbreviation;
	unordered_map<string, string> map{
	    {"Jan", "January"},
	    {"Feb", "February"},
	    {"Mar", "March"},
	    {"Apr", "April"},
	    {"May", "May"},
	    {"Jun", "June"},
	    {"Jul", "July"},
	    {"Aug", "August"},
	    {"Sep", "September"},
	    {"Oct", "October"},
	    {"Nov", "November"},
	    {"Dec", "December"},
	};

	cout << map[abbreviation] << endl;
	return 0;
}
