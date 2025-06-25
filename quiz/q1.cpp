#include <iostream>

template <class T>
void f([[maybe_unused]] T &i) { std::cout << 1 << "\n"; }

template <>
void f([[maybe_unused]] const int &i) { std::cout << 2 << "\n"; }

int main()
{
    const int i = 42; // using const prints 2, not specifiying const prints 1
                      // why?
                      // --> It's easier to deduce to the first templatized function when non-const,
                      //     easier to deduce second type when it is const
    f(i);
}