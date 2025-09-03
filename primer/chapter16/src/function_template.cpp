#include "function_template.hpp"
#include <iostream>
#include <string>

int main(void) {
    // std::cout << compare<double>(2.0, 1.0) << "\n";
    // std::cout << compare<int>(2, 2) << "\n";
    // std::cout << compare<std::string>("a", "ac") << "\n";
    std::cout << compare<3,4>("hi", "mom") << "\n";
    auto int_5a = StaticArray<int, 5>();
    std::cout << int_5a.size() << "\n";
    return 0;
}