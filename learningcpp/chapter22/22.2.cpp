//
// Created by DANG BA MINH on 01/05/2024.
//
#include <iostream>
using namespace std;
void fun(const int& lref) {
	cout << "l-value reference to const" << endl;
}

void fun(const int&& rref) {
	cout << "r-value reference to cost" << endl;
}
int main() {
	int&& rref = 5;
	fun(rref);
	return 0;
}
