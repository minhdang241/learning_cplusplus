#include "sort3.h"
#include <algorithm>
#include <array>
#include <stack>

auto sort3(int& a, int& b, int& c) -> void {
	if (a < b) {
		if (b > c) {
			std::swap(b, c);
		}
	} else {
        std::swap(a, b);
        if (b > c) {
            std::swap(b, c);
            if (a > b) {
                std::swap(a, b);
            }
        }
	}
}

auto sort3(std::string& a, std::string& b, std::string& c) -> void {
    if (a < b) {
        if (b > c) {
            std::swap(b, c);
        }
    } else {
        std::swap(a, b);
        if (b > c) {
            std::swap(b, c);
            if (a > b) {
                std::swap(a, b);
            }
        }
    }
}