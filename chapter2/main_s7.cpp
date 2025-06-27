#include "add_s7.h"
#include <iostream>

#define ADD_3_4_MACRO add(3, 4)

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}