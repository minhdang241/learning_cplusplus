//
// Created by DANG BA MINH on 20/3/25.
//

#include <condition_variable>
#include <mutex>
#include <queue>

std::queue<int> q;
std::mutex mu;
std::condition_variable cond;

void prepare_data() {
	std::lock_guard<std::mutex> guard(mu);
	q.push(42);
	cond.notify_one();
}

void consume_data() {
	while (true) {
		std::unique_lock<std::mutex> lock(mu);
		cond.wait(lock, [] { return !q.empty(); });
		int data = q.front();
		lock.unlock();
	}
}

int main() {
	return 0;
}