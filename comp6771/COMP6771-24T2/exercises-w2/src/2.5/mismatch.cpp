#include <utility>
#include <vector>

#include "mismatch.h"

auto mismatch(std::vector<int>& v1, std::vector<int>& v2) -> std::pair<iter, iter>
{
    auto iter1 = v1.begin();
    auto iter2 = v2.begin();
    while (iter1 != v1.end() and iter2 != v2.end() and *iter1 == *iter2) {
        ++iter1;
        ++iter2;
    }
    return std::make_pair(iter1, iter2);
}