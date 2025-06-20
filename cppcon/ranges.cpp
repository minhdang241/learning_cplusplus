#include <iostream>
#include <array>
#include <ranges>

auto main() -> int {
  auto a = std::array<int, 6> {6,2,3,4,5,1};
  std::ranges::sort(a);
  for (auto const& v: a) {
    std::cout << v << " ";
  }
  std::cout << "\n";
}