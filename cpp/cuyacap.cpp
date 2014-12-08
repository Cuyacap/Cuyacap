#include <iostream>

#include "date.hpp"
using namespace Cuyacap;

int
main(int argc, char **argv)
{
    std::cout << "**********************" << std::endl;
    std::cout << "* Welcome to Cuyacap *" << std::endl;
    std::cout << "**********************" << std::endl;

    Date testDate(7, 12, 2014);

    std::cout << "Created: ";
    testDate.print();
    std::cout << std::endl;

    return 0;
}
