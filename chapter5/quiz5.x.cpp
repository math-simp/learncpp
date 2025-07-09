#include <iostream>
#include <string>
#include <string_view>

std::string getName(int num)
{
    std::string name{};
    std::cout << "Enter the name of person #" << num << ": ";
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(std::string_view person)
{
    int age{};
    std::cout << "Enter the age of " << person << ": ";
    std::cin >> age;
    return age;
}

void printWhoIsOlder(std::string_view person1Name, int person1Age,
                     std::string_view person2Name, int person2Age)
{
    if (person1Age > person2Age)
    {
        std::cout << person1Name << " (age " << person1Age << ") is older than "
                  << person2Name << " (age " << person2Age << ").\n";
    }
    else
    {
        std::cout << person2Name << " (age " << person2Age << ") is older than "
                  << person1Name << " (age " << person1Age << ").\n";
    }
}

int main()
{
    const std::string person1Name = getName(1);
    const int person1Age = getAge(person1Name);
    const std::string person2Name = getName(2);
    const int person2Age = getAge(person2Name);

    printWhoIsOlder(person1Name, person1Age, person2Name, person2Age);

    std::cout << std::endl;

    return 0;
}