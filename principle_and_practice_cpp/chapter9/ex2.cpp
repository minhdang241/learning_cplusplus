//
// Created by DANG BA MINH on 29/07/2024.
//
#include <vector>
#include <string>
#include <iostream>

class Name_pairs {
public:
    void read_names();

    void read_ages();

    void print();

    void sort();


    friend auto operator<<(std::ostream& os, const Name_pairs& p) -> std::ostream&;


private:
    std::vector<std::string> name;
    std::vector<double> age;
};

auto operator<<(std::ostream& os, const Name_pairs& p) -> std::ostream& {
    for (int i = 0; i < p.name.size(); i++) {
        os << "Name: " << p.name[i] << ", Age: " << p.age[i] << std::endl;
    }
    return os;
};

void Name_pairs::sort() {
    auto pairs = std::vector<std::pair<std::string, double>>();
    for (int i = 0; i < name.size(); i++) {
        pairs.push_back(std::make_pair(name[i], age[i]));
    }
    std::sort(pairs.begin(), pairs.end(), [](const auto& a, const auto& b) {
        return a.first < b.first;
    });
    name.clear();
    age.clear();
    for (auto& pair: pairs) {
        name.push_back(pair.first);
        age.push_back(pair.second);
    }
}

void Name_pairs::print() {
    for (int i = 0; i < name.size(); i++) {
        std::cout << "Name: " << name[i] << ", Age: " << age[i] << std::endl;
    }
}

void Name_pairs::read_names() {
    std::string input_name;
    while (true) {
        std::cout << "Enter a name (type 'done' to finish): ";
        std::cin >> input_name;
        if (input_name == "done") {
            break;
        }
        name.push_back(input_name);
        std::cout << std::endl;
    }
}

void Name_pairs::read_ages() {
    if (name.empty()) {
        throw std::runtime_error("No names have been entered.");
    }
    double input_age;
    for (const auto& n: name) {
        std::cout << "Enter age for " << n << ": ";
        std::cin >> input_age;
        age.push_back(input_age);
        std::cout << std::endl;
    }
}

int main() {
    Name_pairs np;
    np.read_names();
    np.read_ages();
    np.sort();
    np.print();
    std::cout << np;
    return 0;
}