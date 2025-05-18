//
// https://minhdang241.github.io/
// Chapter 17 - Exercise 7,8
//
#include <iostream>

using namespace std;

int main() {
	// exercise 7
	char* p = new char[256];
	cin.get(p, 256, '!');
	cout << p << endl;
	cin.clear();
	cin.ignore(256, '\n');

	// exercise 8
	string s;
	getline(cin, s, '!');
	cout << s << endl;
}
