//
// Created by DANG BA MINH on 26/07/2024.
//
#include <condition_variable>
#include <iostream>
#include <mutex>
#include <thread>

std::mutex m1;
std::condition_variable cv;
bool ready = false;

void worker() {
	std::cout << "Worker thread is trying to lock the mutex\n";
	std::unique_lock<std::mutex> lock(m1);
	std::cout << "Worker thread has locked the mutex\n";
}

int main() {
	std::thread t(worker);
	{
		std::unique_lock<std::mutex> lock(m1);
		std::cout << "Main thread has locked the mutex\n";
		std::this_thread::sleep_for(std::chrono::seconds(2));
		std::cout << "Main thread is unlocking the mutex\n";
	}
	t.join();
	return 0;
}