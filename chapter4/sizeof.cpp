#include "TypeInfo.hpp"

#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>
#include <climits> // for CHAR_BIT

int main()
{
    std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

    const int width = 16;
    std::cout << std::left; // left justify output

    PRINT_TYPE_INFO(bool, width);
    PRINT_TYPE_INFO(char, width);
    PRINT_TYPE_INFO(short, width);
    PRINT_TYPE_INFO(int, width);
    PRINT_TYPE_INFO(long, width);
    PRINT_TYPE_INFO(long long, width);
    PRINT_TYPE_INFO(float, width);
    PRINT_TYPE_INFO(double, width);
    PRINT_TYPE_INFO(long double, width);

    return 0;
}