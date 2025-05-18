#include <iostream>

char* getName() {
	return "Minh";
}

int main() {
	int a = 5.0;
	auto b = (double)a;
	std::cout << a << std::endl;
	std::cout << b << std::endl; // b is typed double

	auto name = getName();
	std::cout << name << std::endl;
};