#include <iostream>

namespace x
{
    class C
    {
    };
    void f([[maybe_unused]] const C &i)
    {
        std::cout << "1" << "\n";
    }
}

namespace y
{
    void f([[maybe_unused]] const x::C &i)
    {
        std::cout << "2" << "\n";
    }
}

int main()
{
    f(x::C()); // prints 1, since we deduce the "x" namespace from "x::C"
               // this changes if we specify y::f
}