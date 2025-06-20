#include <algorithm>
#include <iostream>
#include <iterator>

template<long FROM, long TO>
class Range {
 public:
	class iterator : public std::iterator<std::input_iterator_tag, long, long, const long*, long> {
		long num = FROM;

	 public:
		explicit iterator(long _num = 0)
		: num(_num) {}
		auto operator++() -> iterator& {
			num = TO >= FROM ? num + 1 : num - 1;
			return *this;
		}

		auto operator++(int) -> iterator {
			iterator retval = *this;
			++(*this);
			return retval;
		}

		auto operator==(iterator other) -> bool {
			return num == other.num;
		}

		auto operator!=(iterator other) -> bool {
			return !(*this == other);
		}

		auto operator*() const -> reference {
			return num;
		}
	};
	auto begin() -> iterator {
		return iterator(FROM);
	}

	auto end() -> iterator {
		if (TO >= FROM) {
			return iterator(TO + 1);
		}
		else {
			return iterator(TO - 1);
		}
	}
};

auto main(void) -> int {
	auto ranges = Range<5, 10>();
	for (const auto& v : ranges) {
		std::cout << v << " ";
	}
	std::cout << "\n";
	auto it = std::find(ranges.begin(), ranges.end(), 5);
	std::cout << *it << "\n";

	auto ranges2 = Range<10, 5>();
	for (const auto& v : ranges2) {
		std::cout << v << " ";
	}
	std::cout << "\n";
	return 0;
}
