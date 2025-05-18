//
// Created by DANG BA MINH on 01/06/2024.
//
#include <algorithm>
#include <iostream>
#include <list>
#include <mutex>
#include <thread>

std::list<int> some_list;
std::mutex some_mutex; // global mutex

void add_to_list(int new_value) {
	std::lock_guard<std::mutex> guard(some_mutex); // make access to some_list mutually exclusive
	some_list.push_back(new_value);
}
bool list_contains(int value_to_find) {
	std::lock_guard<std::mutex> guard(some_mutex); // make access to some_list mutually exclusive
	return std::find(some_list.begin(), some_list.end(), value_to_find) != some_list.end();
}

int main() {
	return 0;
}