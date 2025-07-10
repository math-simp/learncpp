#include <iostream>
#include <string>
#include <string_view>

int main()
{
    using namespace std::string_literals;

    std::string_view sv{"Hello, World!"s}; // temporary std::string
    std::cout << sv << "\n";               // ?

    return 0;
}
