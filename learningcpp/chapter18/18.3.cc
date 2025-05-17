#include<algorithm>
#include<string>
#include<vector>
#include<iostream>


auto containsNut(std::string const& s) -> bool {
	return s.find("nut") != std::string::npos;
} 

int main() {
	auto ss = std::vector<std::string> {"apple", "banana", "walnut", "lemon"};
	auto found = std::find_if(ss.begin(), ss.end(), containsNut);
	if (found != ss.end()) {
		std::cout << *found << std::endl;
	} else {
		std::cout << "No Nut" << std::endl;

	}

}