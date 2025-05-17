#include <initializer_list>
#include <iostream>
class dummy {
public:
	explicit dummy(int i, int j): i_{i}, j_{j} {
		std::cout << "Constructor!\n"; 
	}
	explicit dummy(std::initializer_list<int> s) {
		std::cout << "initializer_list!\n"; 
		for (auto& v: s) {
			std::cout << v << std::endl;
		}
	}
	auto getval() -> int {
		return i_;
	}
private:
	int i_;
	int j_;

}; 

int main() {
	auto d = dummy(1,2);
	auto d2 = dummy{1,2};
	std::cout << d2.getval() << std::endl;
}
