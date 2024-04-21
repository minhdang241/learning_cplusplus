#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Rock, Paper, Scissors!\n" << endl;
    cout << "Choose your move: Rock, Paper, or Scissors" << endl;
    string input;
    cin >> input;
    cout << "> " << input << endl;
    cout << "You wrote " << input << " to the console." << endl;
}
