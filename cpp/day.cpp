#include <iostream>

#include "day.hpp"

namespace Cuyacap
{
    Day::Day()
    {
        day_ = 0U;
    }

    Day::Day(const unsigned int day)
    : day_(day)
    {
    }

    Day::Day(const Day& other)
    {
        day_ = other.getDay();
    }

    unsigned int
    Day::getDay() const
    {
        return day_;
    }

    void
    Day::setDay(const unsigned int day)
    {
        day_ = day;
    }

    void
    Day::print() const
    {
        std::cout << day_;
    }
}
