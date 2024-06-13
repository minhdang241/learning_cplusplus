//#include "../std_lib_facilities.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool is_palindrome(const string& s) {
    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());
    return reverse_s == s;
}

int main() {
    assert(is_palindrome("home") == false);
    assert(is_palindrome("racecar") == true);
    return 0;
}