#include "function_template.hpp"
#include <iostream>
#include <string>

int main(void) {
    struct sale_data {
        int val = 0;
        auto operator<(const sale_data &rhs) const -> bool {
            return this->val < rhs.val;
        }
    };
    // std::cout << compare<double>(2.0, 1.0) << "\n";
    // std::cout << compare<int>(2, 2) << "\n";
    // std::cout << compare<std::string>("a", "ac") << "\n";
    std::cout << compare<sale_data>({1}, {2}) << "\n";
    // std::cout << compare<3,4>("hi", "mom") << "\n";
    auto int_5a = StaticArray<int, 5>();
    std::cout << int_5a.size() << "\n";
    auto v = std::vector<int>{1,2,3};
    // auto val = 3;
    auto it = my_find(v.begin(), v.end(), 3);
    std::cout << *it << "\n";
    double l[] = {1.2, 2, 3};
    print(l);
    std::string sarr[] = {"alpha", "beta", "gamma"};
    print(sarr);
    std::cout << size(v) << "\n";
    return 0;
}