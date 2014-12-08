#include <iostream>

#include "date.hpp"

namespace Cuyacap
{
    Date::Date()
    {
        day_   = 0U;
        month_ = 0U;
        year_  = 0U;
    }

    Date::Date(const Day& day, const Month& month, const Year& year)
    : day_(day), month_(month), year_(year)
    {
    }

    Date::Date(const Date& other)
    {
        day_   = other.getDay();
        month_ = other.getMonth();
        year_  = other.getYear();
    }

    Day
    Date::getDay() const
    {
        return day_;
    }

    void
    Date::setDay(const Day& day)
    {
        day_ = day;
    }

    Month
    Date::getMonth() const
    {
        return month_;
    }

    void
    Date::setMonth(const Month& month)
    {
        month_ = month;
    }

    Year
    Date::getYear() const
    {
        return year_;
    }

    void
    Date::setYear(const Year& year)
    {
        year_ = year;
    }

    void
    Date::print() const
    {
        month_.print();
        std::cout << "/";
        day_.print();
        std::cout << "/";
        year_.print();
    }
}
