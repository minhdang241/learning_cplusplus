//
// Created by DANG BA MINH on 29/07/2024.
//

#include <iostream>
#include <string>
#include <vector>

auto print(std::vector<int> const& values) -> void {
	for (auto const& v : values) {
		std::cout << v << " ";
	}
	std::cout << std::endl;
}
int main() {
	auto values = std::vector<int>{1, 2, 3, 4};
	print(values);
}