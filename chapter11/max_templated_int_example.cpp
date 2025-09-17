#include <iostream>

// a declaration for our function template (we don't need the definition any more)
template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}

int main()
{
    std::cout << max<int>(1, 2) << '\n';      // instantiates and calls function max<int>(int, int)
    std::cout << max<double>(1e4, 2) << '\n'; // instantiates and calls function max<double>(double, double)

    return 0;
}