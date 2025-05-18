#include "sort3.h"
#include <catch2/catch.hpp>

TEST_CASE("sorted order") {
	auto a = 1;
	auto b = 2;
	auto c = 3;
	sort3(a, b, c);
	CHECK(a == 1);
	CHECK(b == 2);
	CHECK(c == 3);
}

TEST_CASE("unsorted order") {
	auto a = 3;
	auto b = 2;
	auto c = 1;
	sort3(a, b, c);
	CHECK(a == 1);
	CHECK(b == 2);
	CHECK(c == 3);
}

TEST_CASE("negative and positive numbers") {
	auto a = 3;
	auto b = -2;
	auto c = 1;
	sort3(a, b, c);
	CHECK(a == -2);
	CHECK(b == 1);
	CHECK(c == 3);
}

TEST_CASE("sorted string order", "string") {
	auto a = std::string("abcded");
	auto b = std::string("def");
	auto c = std::string("zab");
	sort3(a, b, c);
	CHECK(a == "abcded");
	CHECK(b == "def");
	CHECK(c == "zab");
}

TEST_CASE("unsorted string order", "string") {
	auto a = std::string("zab");
	auto b = std::string("abcded");
	auto c = std::string("def");
	sort3(a, b, c);
	CHECK(a == "abcded");
	CHECK(b == "def");
	CHECK(c == "zab");
}

