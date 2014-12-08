#include <iostream>

#include "month.hpp"

namespace Cuyacap
{
    Month::Month()
    {
        month_ = 0U;
    }

    Month::Month(const unsigned int month)
    {
        month_ = month;
    }

    Month::Month(const Month& other)
    {
        month_ = other.getMonth();
    }

    unsigned int
    Month::getMonth() const
    {
        return month_;
    }

    void
    Month::setMonth(const unsigned int month)
    {
        month_ = month;
    }

    void
    Month::print() const
    {
        std::cout << month_;
    }
}
