#include <iostream>
#include <string>

std::string getName()
{
    std::string name{};
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge()
{
    int age{};
    std::cout << "Enter your age: ";
    std::cin >> age;
    return age;
}

void printSumAgeAndNameLength(std::string name, int age)
{
    int sumAgeAndNameLength = age + static_cast<int>(name.length());
    std::cout << "Your age + length of name is: " << sumAgeAndNameLength << "\n";
}

int main()
{
    std::string name{getName()};
    int age{getAge()};
    printSumAgeAndNameLength(name, age);

    return 0;
}