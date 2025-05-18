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

struct Result {
	int min = 1000000;
	int max = 0;
	double median;
	double mean;
};

auto compute(std::vector<int> const& values) -> Result {
	auto result = Result();
	auto s = 0.0;
	for (auto const& v : values) {
		result.max = std::max(result.max, v);
		result.min = std::min(result.min, v);
		s += v;
	}
	result.mean = s / values.size();
	auto middle_index = values.size() / 2;
	if (values.size() % 2 == 0) {
		result.median = 1.0 * (values[middle_index - 1] + values[middle_index]) / 2;
	}
	else {
		result.median = values[middle_index];
	}
	return result;
}

auto print_result(Result const& r) -> void {
	std::cout << "max: " << r.max << std::endl;
	std::cout << "min: " << r.min << std::endl;
	std::cout << "mean: " << r.mean << std::endl;
	std::cout << "median: " << r.median << std::endl;
}

int main() {
	auto values = std::vector<int>{1, 2, 4};
	auto result = compute(values);
	print_result(result);
}