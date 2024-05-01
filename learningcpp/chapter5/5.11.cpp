//
// Created by DANG BA MINH on 30/04/2024.
//
#include <iostream>
#include <string_view>

using namespace std;

int main() {
    string_view sv{"hello"};
    cout << sv;
    { // create a nested block
        std::string s{"Hello, world!"}; // create a std::string local to this nested block
        sv = s; // sv is now viewing s
    } // s is destroyed here, so sv is now viewing an invalid string

    return 0;
}
