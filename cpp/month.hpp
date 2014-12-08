#ifndef __MONTH_HPP__
#define __MONTH_HPP__

namespace Cuyacap
{
    class Month
    {
    public:
        Month();
        Month(const unsigned int month);
        Month(const Month& other);

        unsigned int getMonth() const;
        void setMonth(const unsigned int month);

        void print() const;

    private:
        unsigned int month_;
    };
}

#endif /* __MONTH_HPP__ */
