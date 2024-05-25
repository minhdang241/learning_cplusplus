//
// https://minhdang241.github.io/
// Chapter 17 - Exercise 3
//
#include <iostream>
using namespace std;

void to_lower(char* s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
}


int main() {
    char message[] = "Hello, World!";
    to_lower(message);
    cout << message << endl;
    return 0;
}

