#include "permutation.h"
#include <unordered_map>

auto is_permutation(const std::string& x, const std::string& y) -> bool
{
    auto cnt1 = std::unordered_map<char, int>{};
    auto cnt2 = std::unordered_map<char, int>{};
    for (auto const& chr: x) {
        ++cnt1[chr];
    }
    
    for (auto const& chr: y) {
        ++cnt2[chr];
    }
    return cnt1 == cnt2;
}
