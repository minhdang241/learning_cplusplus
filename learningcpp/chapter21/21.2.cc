#include <ostream>
#include <iostream>
class Cents {
private:
	int m_cents;
public:
	explicit Cents(int cents): m_cents{cents} {};
	auto getCents() -> int {
		return m_cents;
	}
	friend auto operator+(Cents& c1, Cents& c2) -> int {
		return c1.m_cents + c2.m_cents;
	}
	friend auto operator<<(std::ostream& os, Cents& c) -> std::ostream& {
		return os << c.m_cents;;
	}
};

int main() {
	auto c1 = Cents(10);
	auto c2 = Cents(20);
	std::cout << "C1: " << c1 << std::endl;
	std::cout << "C2: " << c2 << std::endl;
	std::cout << "Total: " << c1 + c2 << std::endl;
}