#include <pthread.h>
#include <string>
#include <iostream>

auto inner(std::string& value) -> void {
	value[0] = 'H';
	std::cout << value << "\n";
}

auto outer(std::string&& value) -> void {
	inner(value);
	std::cout << value << "\n";
}

int main() {
	outer("hello");
}
