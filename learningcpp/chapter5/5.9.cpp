//
// Created by DANG BA MINH on 30/04/2024.
//
#include <iostream>
#include <string>
using namespace std;
int main() {
	//    cout << "Enter your full name: ";
	//    string fullName{};
	//    getline(cin, fullName);
	//    cout << "Enter your favorite colour: ";
	//    string color{};
	//    cin >> color;
	//    cout << "Your name is " << fullName << " and your favorite color is " << color << endl;
	//    int length = fullName.length();
	//    cout << length << endl;
	//    std::cout << "C++ version: " << __cplusplus << std::endl;
	cout << "Enter your full name: ";
	string fullName{};
	getline(cin >> ws, fullName);
	int age = 0;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Your age + length of name is " << age + fullName.length() << endl;

	return 0;
}
