//
// Created by DANG BA MINH on 12/07/2024.
//


#include "Chrono.h"
#include <iostream>

namespace Chrono {
    Date::Date(int d, Month m, int y) : d{d}, m{m}, y(y) {
        if (!is_date(d, m, y)) {
            throw Invalid{};
        }
    }

    const Date& default_date() {
        static Date dd{2001, Month::jan, 1};
        return dd;
    }

    Date::Date() : y{default_date().y}, d{default_date().d}, m{default_date().m} {
    }

    void Date::add_day(int n) {

    }

    void Date::add_month(int n) {

    }

    void Date::add_year(int n) {
        if (m == Month::feb && d == 29 && !leapyear(y + n)) {
            m = Month::mar;
            d = 1;
        }
        y += n;
    }

    bool is_date(int y, Month m, int d) {
        if (d <= 0) return false;
        if (m < Month::jan || Month::dec < m) return false;
        int days_in_month = 31;
        switch (m) {
            case Month::feb:
                days_in_month = (leapyear(y)) ? 29 : 28;
                break;
            case Month::apr:
            case Month::jun:
            case Month::sep:
            case Month::nov:
                days_in_month = 30;
                break;
            case Month::jan:
            case Month::mar:
            case Month::may:
            case Month::jul:
            case Month::aug:
            case Month::oct:
            case Month::dec:
                break;
        }
        if (days_in_month < d) return false;
        return true;
    }

    bool leapyear(int y) {

    }

    bool operator==(const Date& a, const Date& b) {
        return a.year() == b.year() && a.month() == b.month() && a.day() == b.day();
    }

    bool operator!=(const Date& a, const Date& b) {
        return !(a == b);
    }

    std::ostream& operator<<(std::ostream& os, const Date& d) {
        return os << '(' << d.year() << ',' << static_cast<int>(d.month()) << ',' << d.day() << ')';
    }

    std::istream& operator>>(std::istream& is, Date& dd) {
        int y, m, d;
        char ch1, ch2, ch3, ch4;
        is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4;
        if (!is) return is;
        if (ch1 != '(' || ch2 != ',' || ch3 != ',' || ch4 != ')') {
            is.clear(std::ios_base::failbit);
            return is;
        }
        dd = Date(d, Month(m), y);
        return is;
    }

    enum class Day {
        sunday, monday, tuesday, wednesday, thursday, friday, saturday
    };

    Day day_of_week(const Date& d) {
        return Day::sunday;
    }

    Date next_Sunday(const Date& d) {
        return d;
    }

    Date next_weekday(const Date& d) {
        return d;
    }
}