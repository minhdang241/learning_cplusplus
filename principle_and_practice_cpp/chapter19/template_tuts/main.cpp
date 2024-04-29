//
// Created by DANG BA MINH on 27/04/2024.
//

#include <iostream>

template<typename T>
T max(T x, T y) {
    return (x < y) ? y : x;
}

template<typename T>
T min(T x, T y) {
    return (x < y) ? x : y;
}

int main() {
    int maxValue = max<int>(1, 2);
    std::cout << maxValue << std::endl;
    int minValue = min<int>(1, 2);
    std::cout << minValue << std::endl;
    std::cout << max(1, "hello") << std::endl;
    return 0;
};
