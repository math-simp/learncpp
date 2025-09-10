#include <iostream>

int main()
{
    auto i = static_cast<int>(static_cast<unsigned int>(-5)); // convert '-5' to unsigned and back
    auto ui = static_cast<unsigned int>(-5);
    auto si = static_cast<int>(ui);
    std::cout << i << " " << si << '\n';

    return 0;
}