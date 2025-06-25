#include <iostream>
#include <string>

template <typename... T>
int foo(T... args)
{
    return 0;
}

template <typename... T>
std::string bar(T... args)
{
    return "What's this?";
}

void baz()
{
    std::cout << bar(foo()) << std::endl;
}

int main()
{
    baz();

    return 0;
}