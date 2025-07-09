#include <iostream>
#include <string>

int main()
{
    std::cout << "Pick 1 or 2: ";
    int choice{};
    std::cin >> choice;

    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name); // what if std::ws is removed?

    std::cout << "Hello, " << name << ", you picked " << choice << '\n\n';

    using namespace std::string_literals;
    std::cout << "This is a string literal\n"s;

    return 0;
}