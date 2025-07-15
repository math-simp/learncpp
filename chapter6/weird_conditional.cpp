#include <iostream>

int main()
{
    int x{2};
    std::cout << (x < 0) ? "negative" : "non-negative";

    return 0;
}