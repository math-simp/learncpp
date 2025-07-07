#include <cstdint> // for fixed-width integers
#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>

int main()
{
    const int width = 16;
    std::cout << std::left; // left justify output

    std::int16_t x{1};
    std::uint16_t y{65535};
    std::int32_t z{32767}; // x is always a 32-bit integer
    std::cout << std::setw(width) << "x is: " << x << ", and has " << sizeof(x) << " bytes.\n";
    std::cout << std::setw(width) << "y is: " << y++ << ", and has " << sizeof(y) << " bytes.\n"; // post-increment returns the original value of y before incrementing
    std::cout << std::setw(width) << "z is: " << z << ", and has " << sizeof(z) << " bytes.\n";

    std::cout << std::endl;

    return 0;
}