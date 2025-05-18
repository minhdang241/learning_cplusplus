//
// https://minhdang241.github.io/
// Chapter 18 - Exercise 1
//
#include <iostream>
using namespace std;
// Exercise 1
char* strdup(const char* s) {
	const char* tmp = s;
	int n = 0;
	while (*tmp != '\0') {
		n++;
		tmp++;
	}
	char* p = new char[n];
	char* q = p;
	while (*s != '\0') {
		*(p++) = *(s++);
	}
	return q;
}

// Exercise 2
char* findx(const char* s, const char* x) {
	const char* tmp = s;
	while (*tmp != '\0') {
		if (*tmp == *x) {
			const char* p = tmp;
			const char* q = x;
			bool is_match = true;
			while (*p != '\0' && *q != '\0') {
				if (*p == *q) {
					p++;
					q++;
				}
				else {
					is_match = false;
					break;
				}
			}
			if (is_match) {
				return const_cast<char*>(tmp);
			}
		}
		tmp++;
	}
	return nullptr;
}

// Exercise 3
int strcmp(const char* s1, const char* s2) {
	while (*s1 != '\0' || *s2 != '\0') {
		if (*s1 != *s2) {
			return *s1 - *s2;
		}
		s1++;
		s2++;
	}
	return 0;
}

// Exercise 5 & 6
string cat_dot(const string& s1, const string& s2) {
	return s1 + "." + s2;
}

// Exercise 6
string cat_dot(const string& s1, const string& s2, const string& delimiter) {
	return s1 + delimiter + s2;
}

// Exercise 7
char* cat_dot(const char* s1, const char* s2, char delimiter = '.') {
	char* s = new char[strlen(s1) + strlen(s2) + 2];
	int i = 0;
	while (*s1 != '\0') {
		s[i++] = *s1++;
	}
	s[i++] = delimiter;
	while (*s2 != '0') {
		s[i++] = *s2++;
	}
	s[i++] = '\0';
	return s;
}

int main() {
	char* p = strdup("Hello, World!");
	cout << p << endl;
	delete[] p;
	p = findx("Hello, World!", "World");
	cout << p << endl;

	assert(strcmp("Hello", "Hello") == 0);
	assert(strcmp("Hello1123", "Hello") == 1);
	assert(strcmp("Hello", "Hello Minh") == -1);
	string s1 = "Minh";
	string s2 = "Dang";
	assert(cat_dot(s1, s2) == "Minh.Dang");
	assert(cat_dot(s1, s2, " ") == "Minh Dang");
	char s3[]{"Minh"};
	char s4[]{"Dang"};
	char* s = cat_dot(s3, s4);
	assert(strcmp(s, "Minh.Dang") == 0);
	delete[] s;
	return 0;
}
