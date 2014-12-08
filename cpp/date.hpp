#ifndef __DATE_HPP__
#define __DATE_HPP__

#include "day.hpp"
#include "month.hpp"
#include "year.hpp"

namespace Cuyacap
{
    class Date
    {
    public:
        Date();
        Date(const Day& day, const Month& month, const Year& year);
        Date(const Date& other);

        Day getDay() const;
        void setDay(const Day& day);

        Month getMonth() const;
        void setMonth(const Month& month);

        Year getYear() const;
        void setYear(const Year& year);

        void print() const;

    private:
        Day day_;
        Month month_;
        Year year_;
    };
}

#endif /* __DATE_HPP__ */
