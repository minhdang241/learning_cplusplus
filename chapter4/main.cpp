#include <iostream>

int main() {
    int gearA = 7;
    int gearB = 4;

    std::cout << "Time Traveler's Code: ";
    std::cout << ++gearA << gearB++ << ++gearA << gearB++ << ++gearA << gearB;

    return 0;
}