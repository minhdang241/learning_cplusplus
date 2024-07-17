#include "../std_lib_facilities.h"
#include "Chrono.h"

struct DateStruct {
    int day;
    int month;
    int year;
};

void print(DateStruct& date) {
    std::cout << date.year << "-" << date.month << "-" << date.day << std::endl;
}

enum class Month {
    jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month operator++(Month& m) {
    m = (m == Month::dec) ? Month::jan : Month(int(m) + 1);
    return m;
}

//class Date {
//private:
//    int day;
//    Month month;
//    int year;
//
//    bool is_valid() const;
//
//public:
//    class Invalid : std::exception {
//    };
//
//    // default constructor
//    Date();
//
//    Date(int d, Month m, int y);
//
//    // copy constructor
//    // Date(const Date& d) = delete;
//    void inc_month() { month = ++month; }
//
//    void printUS() const;
//
//    void printEU() const;
//
//};



void Date::printUS() const {
    std::cout << year << "-" << static_cast<int>(month) << "-" << day << std::endl;
}

bool Date::is_valid() const {
    if (day < 1 || day > 31) return false;
    else return true;
}

void Date::printEU() const {
    std::cout << day << "-" << static_cast<int>(month) << "-" << year << std::endl;
}


int main() {
    // construct a Date object
    Date date{24, Month::jan, 1998};
    date.printUS();

    // test invalid values for constructing object Date
    try {
        Date invalid_date{34, Month::jan, 1998};
    } catch (Date::Invalid& e) {
        std::cout << "Invalid date" << std::endl;
    }

    // test copy constructor
    auto copy_date = date;
    copy_date.inc_month();
    copy_date.printUS();
    date.printUS();
    Date date3;
    date3.printUS();

    Chrono::Date;
    return 0;
}
