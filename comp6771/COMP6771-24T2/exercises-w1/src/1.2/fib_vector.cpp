#include "fib_vector.h"

auto fibonacci(int n) -> std::vector<int> {
	auto nums = std::vector<int>{};
	//if (n < 1) {
	//	return nums;
	//}
	//if (n >= 1) {
	//	nums.push_back(1);
	//}
	//if (n >= 2) {
	//	nums.push_back(2);
	//}
	//while (nums.size() < size_t(n)) {
	//	nums.push_back(*(nums.end() - 1) + *(nums.end() - 2));
	//}

    for (int k1 = 0, k2 = 1; n > 0; --n) {
        nums.push_back(k1 + k2);
        k1 = k2;
        k2 = nums.back();
    }
	return nums;
}
