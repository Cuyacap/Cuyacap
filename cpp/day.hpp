#ifndef __DAY_HPP__
#define __DAY_HPP__

namespace Cuyacap
{
    class Day
    {
    public:
        Day();
        Day(const unsigned int day);
        Day(const Day& other);

        unsigned int getDay() const;
        void setDay(const unsigned int day);

        void print() const;

    private:
        unsigned int day_;
    };
}

#endif /* __DAY_HPP__ */
