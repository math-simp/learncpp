#include "TypeInfo.hpp"

#include <iomanip>
#include <iostream>
#include <climits>

int main()
{
    const int width = 16;
    std::cout << std::left;

    PRINT_TYPE_INFO(float, width);
    PRINT_TYPE_INFO(double, width);
    PRINT_TYPE_INFO(long double, width);

    std::cout << std::endl;

    return 0;
}