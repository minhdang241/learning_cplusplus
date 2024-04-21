#include <iostream>
#include <set>
#include <random>

using namespace std;

string generateComputerChoice() {
    vector<string> options{"Rock", "Paper", "Scissors"};
    std::random_device rd;
    std::mt19937 get(rd());
    int randomChoice = get() % 3;
    return options[randomChoice];
}

string compareChoices(string choice1, string choice2) {
    if (choice1 == "Rock") {
        if (choice2 == "Paper") {
            return "Paper covers Rock. Sorry, you lost.";
        } else if (choice2 == "Scissors") {
            return "Rock smashes Scissors. You win!";
        } else {
            return "It's a draw.";
        }
    } else if (choice1 == "Paper") {
        if (choice2 == "Scissors") {
            return "Scissors cutting Paper. Sorry, you lost.";
        } else if (choice2 == "Rock") {
            return "Rock smashes Scissors. You win!";
        } else {
            return "It's a draw.";
        }
    } else {
        if (choice2 == "Rock") {
            return "Rock smashes Scissors. Sorry, you lost.";
        } else if (choice2 == "Paper") {
            return "Scissors cutting Paper. You win!";
        } else {
            return "It's a draw.";
        }
    }
}

bool isDigit(string input) {
    for (auto c: input) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

string toRightFormat(string input) {
    string result;
    result += toupper(input[0]);
    for (int i = 1; i <= input.size() - 1; i++) {
        result += tolower(input[i]);
    }
    return result;
}

int main() {
    cout << "Welcome to Rock, Paper, Scissors!\n" << endl;
    cout << "Choose your move: " << endl;
    cout << "1 - Rock," << endl;
    cout << "2 - Paper," << endl;
    cout << "3 - Scissors" << endl;
    string stringInput;
    cin >> stringInput;
    string input;
    if (isDigit(stringInput)) {
        int option = stoi(stringInput);
        if (option == 1) {
            input = "Rock";
        } else if (option == 2) {
            input = "Paper";
        } else if (option == 3) {
            input = "Scissors";
        } else {
            cout << "Invalid move. Please enter Rock, Paper, or Scissors." << endl;
            return 0;
        }
    } else {
        input = stringInput;
        set<string> validInputs{"Rock", "Paper", "Scissors"};
        input = toRightFormat(input);
        if (validInputs.find(input) == validInputs.end()) {
            cout << "Invalid move. Please enter Rock, Paper, or Scissors." << endl;
            return 0;
        }
    }
    cout << "> " << input << endl;
    string computerChoice = generateComputerChoice();
    string result = compareChoices(input, computerChoice);
    cout << "The computer chose " << computerChoice << ". " << result << endl;
}
