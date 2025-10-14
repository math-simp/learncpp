#include <iostream>

void printValue(const int &y) // y only accepts modifiable lvalues
{
    std::cout << y << '\n';
}

int main()
{
    int x{5};
    printValue(x); // ok: x is a modifiable lvalue

    const int z{5};
    printValue(z); // ok: z is a non-modifiable lvalue, y binds to z

    printValue(5); // ok: 5 is rvalue literal, y binds to temporary int object

    return 0;
}