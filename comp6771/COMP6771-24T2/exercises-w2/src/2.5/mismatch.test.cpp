#include "mismatch.h"
#include <catch2/catch.hpp>

TEST_CASE("Left range is empty")
{
    auto v1 = std::vector<int> {};
    auto v2 = std::vector<int> { 1, 2, 3 };

    // this is called a structured binding. Available from C++17
    // See: https://en.cppreference.com/w/cpp/language/structured_binding
    const auto& [iter1, iter2] = mismatch(v1, v2);

    REQUIRE(iter2 != v2.end());
    CHECK(iter1 == v1.end());
}

TEST_CASE("Right range is empty")
{
    auto v1 = std::vector<int> { 1, 2, 3 };
    auto v2 = std::vector<int> {};

    const auto& [iter1, iter2] = mismatch(v1, v2);

    REQUIRE(iter1 != v1.end());
    CHECK(iter2 == v2.end());
}

TEST_CASE("No mismatch")
{
    auto v1 = std::vector<int> {1, 2, 3};
    auto v2 = std::vector<int> {1, 2, 3};
    auto const& [iter1, iter2] = mismatch(v1, v2);
    CHECK(iter1 == v1.end());
    CHECK(iter2 == v2.end());
}

TEST_CASE("Single mismatch")
{
    auto v1 = std::vector<int> {1, 4, 3};
    auto v2 = std::vector<int> {1, 2, 3};
    auto const& [iter1, iter2] = mismatch(v1, v2);
    CHECK(*iter1 == 4);
    CHECK(*iter2 == 2);
}
TEST_CASE("Multiple mismatches")
{
    auto v1 = std::vector<int> {1, 4, 5};
    auto v2 = std::vector<int> {1, 2, 3};
    auto const& [iter1, iter2] = mismatch(v1, v2);
    CHECK(*iter1 == 4);
    CHECK(*iter2 == 2);
}