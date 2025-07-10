#include <cmath>
#include <iostream>
#include <limits>

int main()
{
#pragma GCC diagnostic ignored "-Wdiv-by-zero"
    double mystery{1.0 / 0 - 1.0 / 0};
    std::cout << mystery << '\n';
    std::cout << std::isnan(mystery) << '\n';
    std::cout << std::signbit(mystery) << '\n';
}
