#pragma once
#include <string>
#include <iostream>

inline auto ASSERT(bool condition, const std::string& msg) noexcept {
    if (!condition) {
        std::cerr << msg << std::endl;
        exit(EXIT_FAILURE);
    }
}

inline auto FATAL(const std::string& msg) noexcept {
    std::cerr << msg << std::endl;
    exit(EXIT_FAILURE);
}