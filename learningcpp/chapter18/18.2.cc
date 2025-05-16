#include <vector>
#include <iostream>

int main() {
	auto v = std::vector<int>{1,2,3,4,5};
	auto it = v.begin();
	++it;
	std::cout << *it << std::endl; // 2
	it = v.erase(it);
	std::cout << *it << std::endl; // 3
}