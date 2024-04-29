//#include "../std_lib_facilities.h"
#include <memory>
#include <iostream>

using namespace std;
struct MyStruct {
    int data;
};

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

unique_ptr<int[]> generatePrimes(int N) {
    unique_ptr<int[]> primes(new int[N]);
    int count = 0;
    int num = 2;
    while (count < N) {
        if (isPrime(num)) {
            primes[count] = num;
            count++;
        }
        num++;
    }
    return primes;
}

class Point {
public:
    Point(int x, int y) : x(x), y(y) {}
    bool IsEqual(Point& anotherPoint) {
        if (this->x == anotherPoint.x && anotherPoint.y == this->y) {
            return true;
        } else {
            return false;
        }
    }

    //Your IsEqual function here

public:
    int x;
    int y;
};

int main() {
    Point p1(1, 2);
    Point p2(1, 2);
    Point* ptr = &p1;
    cout << (*ptr).x;

    if (p1.IsEqual(p2)) {
        std::cout << "p1 and p2 refer to the same object." << std::endl;
    } else {
        std::cout << "p1 and p2 refer to different objects." << std::endl;
    }

    return 0;
}
