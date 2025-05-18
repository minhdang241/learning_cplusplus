//
// Created by DANG BA MINH on 29/04/2024.
//
#include <iostream>
using namespace std;

int main() {
	int* ptr{new int};
	*ptr = 7;
	cout << *ptr << endl;
	return 0;
}