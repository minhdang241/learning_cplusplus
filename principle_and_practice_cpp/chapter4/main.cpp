#include <iostream>

int main() {
    int value;
    std::cout << "Enter a value: ";
    std::cin >> value;

    if (value < 0) {
        goto negative;
    } else {
        goto positive;
    }

    negative:
    std::cout << "Negative value entered!" << std::endl;
    return 0;

    positive:
    std::cout << "Positive value entered!" << std::endl;
    return 0;
}