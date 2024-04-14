#pragma once
#include <string>
#include <iostream>
#define LIKELY(x) __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)

inline void ASSERT(bool condition, const std::string& msg) noexcept {
    if (UNLIKELY(!condition)) {
        std::cerr << msg << std::endl;
        exit(EXIT_FAILURE);
    }
}

inline void FATAL(const std::string& msg) noexcept {
    std::cerr << msg << std::endl;
    exit(EXIT_FAILURE);
}