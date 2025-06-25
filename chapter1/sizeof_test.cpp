#include <iostream>

int main()
{
    std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes
    int x{2};
    std::cout << (x = 5) << '\n';
    return 0;
}