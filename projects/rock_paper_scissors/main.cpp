#include <iostream>
#include <random>
#include <set>

using namespace std;

string generateComputerChoice() {
	vector<string> options{"Rock", "Paper", "Scissors"};
	std::random_device rd;
	std::mt19937 get(rd());
	int randomChoice = get() % 3;
	return options[randomChoice];
}

int compareChoices(string choice1, string choice2) {
	if (choice1 == "Rock") {
		if (choice2 == "Paper") {
			return -1;
		}
		else if (choice2 == "Scissors") {
			return 1;
		}
		else {
			return 0;
		}
	}
	else if (choice1 == "Paper") {
		if (choice2 == "Scissors") {
			return -1;
		}
		else if (choice2 == "Rock") {
			return 1;
		}
		else {
			return 0;
		}
	}
	else {
		if (choice2 == "Rock") {
			return -1;
		}
		else if (choice2 == "Paper") {
			return 1;
		}
		else {
			return 0;
		}
	}
}

bool isDigit(string input) {
	for (auto c : input) {
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
	bool isPlayAgain;
	do {
		cout << "Welcome to Rock, Paper, Scissors!\n" << endl;
		cout << "Please enter your name, number of repetitions, and your chosen steps\n";
		cout << "1 - Rock," << endl;
		cout << "2 - Paper," << endl;
		cout << "3 - Scissors" << endl;
		string stringInput, name;
		vector<string> stringInputs;
		int noRepetitions, userScore = 0, computerScore = 0;
		cin >> name >> noRepetitions;
		cout << "\n> " << name << " " << noRepetitions;
		while (cin >> stringInput) {
			cout << " " << stringInput;
			stringInputs.push_back(stringInput);
			if (stringInputs.size() == noRepetitions) {
				break;
			}
		}
		cout << "\n\nGame Start!\n";
		for (int i = 1; i <= noRepetitions; i++) {
			stringInput = stringInputs[i - 1];
			string input;
			if (isDigit(stringInput)) {
				int option = stoi(stringInput);
				if (option == 1) {
					input = "Rock";
				}
				else if (option == 2) {
					input = "Paper";
				}
				else if (option == 3) {
					input = "Scissors";
				}
				else {
					cout << "Invalid move. Please enter Rock, Paper, or Scissors." << endl;
					return 0;
				}
			}
			else {
				input = stringInput;
				set<string> validInputs{"Rock", "Paper", "Scissors"};
				input = toRightFormat(input);
				if (validInputs.find(input) == validInputs.end()) {
					cout << "Invalid move. Please enter Rock, Paper, or Scissors." << endl;
					return 0;
				}
			}
			cout << "Round " << i << ": ";
			string computerChoice = generateComputerChoice();
			int result = compareChoices(input, computerChoice);
			cout << "Computer chose " << computerChoice << ". " << name << " chose " << input << ". Winner: ";
			if (result == -1) {
				cout << "Computer.";
				computerScore++;
			}
			else if (result == 1) {
				cout << name << ".";
				userScore++;
			}
			else {
				cout << "Draw.";
			}
			cout << "\n";
		}
		cout << "\nGame Over!\n";
		cout << "Total Score - " << name << ": " << userScore << ", Computer: " << computerScore << "\n";
		cout << "Would you like to play again? (yes/no)\n";
		string answer;
		cin >> answer;
		isPlayAgain = answer == "yes";
	} while (isPlayAgain);
}