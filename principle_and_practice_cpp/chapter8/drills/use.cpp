//
// Created by DANG BA MINH on 27/04/2024.
//

#include "my.h"
#include <cassert>
#include <iostream>
using namespace std;

namespace X {
	int var;
	void print() {
		cout << var << endl;
	}
} // namespace X
namespace Y {
	int var;
	void print() {
		cout << var << endl;
	}
} // namespace Y

namespace Z {
	int var;
	void print() {
		cout << var << endl;
	}
} // namespace Z

auto test_swap_v() -> void {
	int x = 7;
	int y = 9;
	swap_v(x, y);
	assert(x == 7 and y == 9);
	swap_v(7, 9);
	const int cx = 7;
	const int cy = 9;
	swap_v(cx, cy);
	swap_v(7.7, 9.9);
	assert(cx == 7 and cy == 9);
	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx, dy);
	assert(dx == 7.7 and dy == 9.9);
	swap_v(7.7, 9.9);
}
auto test_swap_r() -> void {
	int x = 7;
	int y = 9;
	swap_r(x, y);
	assert(x == 9 and y == 7);
	// swap_r(7, 9); -> cannot have reference of the literal value
	// const int cx = 7;
	// const int cy = 9;
	// swap_r(cx, cy);
	// swap_r(7.7, 9.9);
	// assert(cx == 7 and cy == 9);
	// double dx = 7.7;
	// double dy = 9.9;
	// swap_r(dx, dy); // int& != double&
	// assert(dx == 7.7 and dy == 9.9);
	// swap_r(7.7, 9.9);
}

int main() {
	foo = 7;
	print_foo();
	print(99);
	test_swap_v();
	test_swap_r();
	auto const d = double(10);
	print(d);
	return 0;
}
