//
// Created by DANG BA MINH on 18/04/2024.
//

#include <iostream>

class Dog {
 private:
	std::string m_name;
	int m_age;
	int m_weight;

 public:
	// Default constructor
	Dog() {
		std::cout << "I am a constructor and I was called by default." << std::endl;
		m_name = "Barsic";
		m_age = 11;
		m_weight = 25;
	}

	// Parameterized constructor
	Dog(std::string name, int age, int weight) {
		m_name = name;
		m_age = age;
		m_weight = weight;
	}

	// Copy constructor
	Dog(const Dog& obj) {
		std::cout << "Copy constructor is called." << std::endl;
		m_name = obj.m_name;
		m_age = obj.m_age;
		m_weight = obj.m_weight;
	}
	~Dog() {
		std::cout << "Dog " << m_name << " killed!" << std::endl;
	}

	void print() {
		std::cout << "My name is " << m_name;
		std::cout << ", I'm " << m_age;
		std::cout << " years old and my weight: " << m_weight;
		std::cout << " kg" << std::endl;
	}
};

int main() {
	Dog bars;
	bars.print();
	Dog milo{"Milo", 11, 21};
	milo.print();
	Dog copyiedBars = bars;
	copyiedBars.print();
	return 0;
};