#include <iostream>

int main()
{
    [[maybe_unused]] double pi{3.14159};
    int a = 0, b = 0;
    std::cout << "Method 1: b++" << std::endl;
    std::cout << (a++, b++) << std::endl;
    std::cout << std::endl;

    std::cout << "Method 2: ++b" << std::endl;
    std::cout << (++a, ++b) << std::endl;
    std::cout << std::endl;

    std::cout << "a was " << a << ", ";
    std::cout << "b was " << b << "." << std::endl;

    return 0;
}
