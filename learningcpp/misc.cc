#include <iostream>
class point {
public:
	point(int x, int y) {
		x_ = x;
		y_ = y;
	}

	// auto operator[](int i) -> int& {
		// return i == 0 ? x_ : y_;
	// }

	auto operator[](int i) -> int& {
		return i == 0 ? x_ : y_;
	}

private:
	int x_;
	int y_;
};

int main() {
	auto a = point {1,2};
	a[0] += 1;
	std::cout << a[0] << std::endl;
	return 0;

}