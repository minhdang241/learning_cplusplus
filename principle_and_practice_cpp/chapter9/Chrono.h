//
// Created by DANG BA MINH on 12/07/2024.
//

#ifndef LEARNING_CPLUSCPLUS_CHRONO_H
#define LEARNING_CPLUSCPLUS_CHRONO_H

#include <iostream>

namespace Chrono {
    enum class Month {
        jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };

    class Date {
    private:
        int d;
        Month m;
        int y;

        bool is_valid() const;

    public:
        class Invalid : std::exception {
        };

        Date();

        Date(int day, Month month, int year);

        int day() const { return d; }

        Month month() const { return m; }

        int year() const { return y; }

        void add_day(int);

        void add_month(int);

        void add_year(int);
    };

    auto is_date(int d, Month m, int y) -> bool;

    auto leapyear(int y) -> bool;

    auto operator==(const Date&, const Date&) -> bool;

    auto operator!=(const Date&, const Date&) -> bool;

    auto operator<<(std::ostream&, const Date&) -> std::ostream&;

    auto operator>>(std::istream&, const Date&) -> std::istream&;
}

#endif //LEARNING_CPLUSCPLUS_CHRONO_H
