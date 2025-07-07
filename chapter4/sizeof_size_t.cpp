#include "TypeInfo.hpp"

#include <cstddef> // for std::size_t
#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>

int main()
{
    const int width = 16;
    std::cout << std::left; // left justify output

    PRINT_TYPE_INFO(std::size_t, width);
    PRINT_TYPE_INFO(unsigned long, width);
    PRINT_TYPE_INFO(unsigned long long, width);

#pragma GCC diagnostic ignored "-Wdiv-by-zero"
    double posinf{1.0 / 0 - 1.0 / 0}; // good question for class
    std::cout << posinf << std::endl;

    return 0;
}