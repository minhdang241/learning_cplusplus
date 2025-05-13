//
// Created by DANG BA MINH on 29/07/2024.
//

#include <iostream>
#include <string>
#include <vector>

auto print(std::vector<int> const &values) -> void {
  for (auto const &v : values) {
    std::cout << v << " ";
  }
  std::cout << std::endl;
}

// auto reverse(std::vector<int>& values) {
// std::reverse(values.begin(), values.end());
// }

auto reverse(std::vector<int> const &values) -> std::vector<int> {
  auto new_vector = std::vector<int>(values);
  std::reverse(new_vector.begin(), new_vector.end());
  return new_vector;
}
int main() {
  auto values = std::vector<int>{1, 2, 3, 4};
  print(values);
  auto new_vector = reverse(values);
  print(values);
  print(new_vector);
}