#include <iostream>
#include <set>

using namespace std;

int main() {
    string input;
    set<string> validInputs{"Rock", "Paper", "Scissors"};
    cout << "Welcome to Rock, Paper, Scissors!\n" << endl;
    cout << "Choose your move: Rock, Paper, or Scissors" << endl;
    cin >> input;
    cout << "> " << input << endl;
    if (validInputs.find(input) == validInputs.end()) {
        cout << "Invalid move. Please enter Rock, Paper, or Scissors." << endl;
    } else {
        cout << "You chose the " << input << ", great move." << endl;
    }
}
