#ifndef __YEAR_HPP__
#define __YEAR_HPP__

namespace Cuyacap
{
    class Year
    {
    public:
        Year();
        Year(const unsigned int year);
        Year(const Year& other);

        unsigned int getYear() const;
        void setYear(const unsigned int year);

        void print() const;

    private:
        unsigned int year_;
    };
}

#endif /* __YEAR_HPP__ */
