#include "setdiff.h"

#include <catch2/catch.hpp>
#include <stdexcept>

TEST_CASE("matching single char") {
	auto vec_set = std::vector<char>{'a', 'b', 'c', 'd', 'm'};
	auto blacklist = std::vector<char>{'m', 'i', 'n', 'h'};
	auto expected = std::vector<char>{'a', 'b', 'c', 'd'};
	set_difference(vec_set, blacklist);
	REQUIRE(vec_set == expected);
}

TEST_CASE("matching multiple chars") {
	auto vec_set = std::vector<char>{'a', 'b', 'c', 'd', 'm'};
	auto blacklist = std::vector<char>{'m', 'i', 'n', 'h', 'a'};
	auto expected = std::vector<char>{'b', 'c', 'd'};
	set_difference(vec_set, blacklist);
	REQUIRE(vec_set == expected);
}

TEST_CASE("empty vec_set") {
	auto vec_set = std::vector<char>{};
	auto blacklist = std::vector<char>{'m', 'i', 'n', 'h'};
	auto expected = std::vector<char>{};
	set_difference(vec_set, blacklist);
	REQUIRE(vec_set == expected);
}

TEST_CASE("empty blacklist") {
	auto vec_set = std::vector<char>{'a', 'b', 'c', 'd', 'm'};
	auto blacklist = std::vector<char>{};
	auto expected = std::vector<char>{'a', 'b', 'c', 'd', 'm'};
	set_difference(vec_set, blacklist);
	REQUIRE(vec_set == expected);
}

TEST_CASE("empty vec_set and blacklist") {
	auto vec_set = std::vector<char>{};
	auto blacklist = std::vector<char>{};
	auto expected = std::vector<char>{};
	set_difference(vec_set, blacklist);
	REQUIRE(vec_set == expected);
}
