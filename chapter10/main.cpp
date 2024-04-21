#include "../std_lib_facilities.h"

int writeToFile(std::string filename, std::string text) {
    std::ofstream file{filename};
    if (!file) {
        std::cout << "Failed to open file for writing" << endl;
        return 1;
    }
    file << text;
    file.close();
    return 0;
}

void readFromFile(std::string filename) {
    std::ifstream file{filename};
    std::string word;
    while (file >> word) {
        std::cout << word << std::endl;
    }
}
int main() {
    std::string filename = "/Users/minhdg241/CLionProjects/learning_cpluscplus/chapter10/text_file.txt";
    std::string text = "Hello, World!!!";
    writeToFile(filename, "Hello, Minh!!!");
    readFromFile(filename);
    return 0;
}
