#include <iostream>

int main()
{
    bool bFalse{0}; // okay: initialized to false
    bool bTrue{1};  // okay: initialized to true
    // bool bNo{2};
    bool bYes = 2; // okay, implicit copy

    std::cout << bFalse << bTrue << bYes << '\n';

    return 0;
}