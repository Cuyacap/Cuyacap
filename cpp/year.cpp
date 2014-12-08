#include <iostream>

#include "year.hpp"

namespace Cuyacap
{
    Year::Year()
    {
        year_ = 0U;
    }

    Year::Year(const unsigned int year)
    : year_(year)
    {
    }

    Year::Year(const Year& other)
    {
        year_ = other.getYear();
    }

    unsigned int
    Year::getYear() const
    {
        return year_;
    }

    void
    Year::setYear(const unsigned int year)
    {
        year_ = year;
    }

    void
    Year::print() const
    {
        std::cout << year_;
    }
}
