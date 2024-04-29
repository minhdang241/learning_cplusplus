#include <iostream>
#include <set>

using namespace std;

int main() {
    char character;
    set<char> vowels{'e', 'u', 'o', 'a', 'i'};

    cin >> character;
    if (vowels.find(tolower(character)) != vowels.end()) {
        cout << character << " is a vowel." << endl;
    } else {
        cout << character << " is a consonant." << endl;
    }

    return 0;
}
