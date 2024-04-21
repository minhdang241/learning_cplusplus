#include <iostream>
using namespace std;

int main() {
    float celsiusDegree;
    cin >> celsiusDegree;
    float fahrenheitDegree = (celsiusDegree*9/5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheitDegree << endl;
    return 0;
}
