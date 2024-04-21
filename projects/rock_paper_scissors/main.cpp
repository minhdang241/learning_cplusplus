#include <iostream>
#include <set>
#include <random>

using namespace std;
string generateComputerChoice() {
    vector<string> options{"Rock", "Paper", "Scissors"};
    std::random_device rd;
    std::mt19937  get(rd());
    int randomChoice = get() % 3;
    return options[randomChoice];
}

string compareChoices(string choice1, string choice2) {
    if (choice1 == "Rock")  {
        if (choice2 == "Paper") {
            return "Paper covers Rock. Sorry, you lost.";
        } else if (choice2 == "Scissors") {
            return "Rock smashes Scissors. You win!";
        } else {
            return "It's a draw.";
        }
    } else if (choice1 == "Paper") {
        if (choice2 == "Scissors") {
            return "Scissors cut Paper. Sorry, you lost.";
        } else if (choice2 == "Rock") {
            return "Rock smashes Scissors. You win!";
        } else {
            return "It's a draw.";
        }
    } else {
        if (choice2 == "Rock") {
            return "Rock smashes Scissors. Sorry, you lost.";
        } else if (choice2 == "Paper") {
            return "Scissors cut Paper. You win!";
        } else {
            return "It's a draw.";
        }
    }
}
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
        string computerChoice = generateComputerChoice();
        string result = compareChoices(input, computerChoice);
        cout << "The computer chose " << computerChoice << ". " << result << endl;
    }
}
