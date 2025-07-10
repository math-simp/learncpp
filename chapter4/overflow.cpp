#include <iomanip>
#include <iostream>

void printIntegerVal(std::string_view var, const auto x, const int width)
{
    std::cout << var << " is: " << std::setw(width) << x << '\n';
}

int main()
{
    const int width = 16;
    std::cout << std::left;

    std::cout << "SIGNED INTEGER\n";
    // assume 4 byte integers
    int x{2'147'483'647}; // the maximum value of a 4-byte signed integer
    printIntegerVal("x", x, width);
    std::cout << "Execute x = x + 1\n";
    x += 1; // integer overflow, undefined behavior
    printIntegerVal("x", x, width);

    std::cout << std::endl;

    std::cout << "UNSIGNED INTEGER\n";
    unsigned int y{0};
    printIntegerVal("y", y, width);
    std::cout << "Execute y = y - 1\n";
    y -= 1;
    printIntegerVal("y", y, width);

    std::cout << std::endl;

    return 0;
}