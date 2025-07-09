#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::cin >> name;

    std::cout << "Enter your favorite color: ";
    std::string color{};
    std::cin >> color;

    std::string leftover{};
    std::cin >> leftover;

    std::cout << "Your name is " << name << " and your favorite color is " << color << '\n';
    std::cout << "The leftovers we got (if any): " << leftover << '\n';

    return 0;
}