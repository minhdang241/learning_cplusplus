#include <iostream>
#include <thread>
#include <unistd.h>

void hello() {
	int cnt = 0;
	sleep(1);
	std::cout << "Hello, Chapter 1!" << std::endl;
}
int main() {
	std::thread t(hello);
	std::cout << "Hello, There\n";
	std::cout << std::thread::hardware_concurrency() << std::endl;
	t.join();
	return 0;
}
