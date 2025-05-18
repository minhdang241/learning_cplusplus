//
// Created by DANG BA MINH on 30/04/2024.
//
#include <iostream>

int main() {
	constexpr bool inBigClassRoom{false};
	constexpr int classSize{inBigClassRoom ? 30 : 20};
	std::cout << "The class size is: " << classSize << std::endl;
	int x{2};
	int y{1};
	int z{10 - (x > y ? x : y)};
	std::cout << z;
	return 0;
}
