#include "scale.h"
#include <catch2/catch.hpp>


TEST_CASE("Default value for scale factor") {
    auto vec = std::vector<int>{6, 7, 7, 1};
    const auto expected = std::vector<double>{3, 3.5, 3.5, 0.5};

    auto scaled = scale(vec);

    CHECK(scaled == expected);
}

TEST_CASE("Empty vector scales") {
    auto factor = 2.5;
    auto vec = std::vector<int>{};
    const auto expected = std::vector<double>{};

    auto scaled = scale(vec, factor);

    CHECK(scaled == expected);
}

TEST_CASE("Non-empty vector scales") {
    auto factor = 2.5;
    auto vec = std::vector<int>{6, 7, 7, 1};
    const auto expected = std::vector<double>{15, 17.5, 17.5, 2.5};

    auto scaled = scale(vec, factor);

    CHECK(scaled == expected);
}

TEST_CASE("Factor 1") {
    auto factor = 1;
    auto vec = std::vector<int>{1,2,3,4};
    auto const expected = std::vector<double>{1,2,3,4};
    auto scaled = scale(vec, factor);
    CHECK(scaled == expected);
}

TEST_CASE("Factor 0") {
    auto factor = 0;
    auto vec = std::vector<int>{1,2,3,4};
    auto const expected = std::vector<double>{0,0,0,0};
    auto scaled = scale(vec, factor);
    CHECK(scaled == expected);
}
