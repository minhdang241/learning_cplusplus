#include "../std_lib_facilities.h"
struct DateStruct{
    int day;
    int month;
    int year;
};

void print(DateStruct &date) {
    std::cout << date.year << "-" << date.month << "-" << date.day << std::endl;
}

class DateClass {
public:
    int day;
    int month;
    int year;

    void printUS() {
        std::cout << year << "-" << month << "-" << day << std::endl;
    }

    void printEU();

};
void DateClass::printEU() {
    std::cout << day << "-" << month << "-" << year << std::endl;
}

int main()
{
    DateStruct today{05,05,2023};
    today.day = 18;
    today.month =2;
    today.year = 2024;
    print(today);
    DateClass nextDay {06, 05, 2023};
    nextDay.printUS();
    nextDay.printEU();
    return 0;
}
