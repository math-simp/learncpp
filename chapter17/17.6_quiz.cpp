#include <iostream>
#include <string>
#include <string_view>
#include <array>

namespace Animal
{
    enum Type : unsigned int
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,

        max_animals = 6
    };
}

struct Data
{
    std::string_view name;
    uint legs;
    std::string_view sound;
};

constexpr std::array<Data, Animal::max_animals> animals{{{"chicken", 2, "cluck"},
                                                         {"dog", 4, "woof"},
                                                         {"cat", 4, "meow"},
                                                         {"elephant", 4, "pawoo"},
                                                         {"duck", 2, "quack"},
                                                         {"snake", 0, "hissss"}}};

void printAnimalData(const Data &d)
{
    std::cout << "A " << d.name << " has " << d.legs << " legs and says " << d.sound << ".\n";
}

void printOtherAnimals(std::string_view input)
{
    Data d{};
    std::cout << "\nHere is the data for the rest of the animals: \n";
    for (std::size_t index{0}; index < size(animals); ++index)
    {
        d = {animals[index]};
        if (input != d.name)
        {
            std::cout << "A " << d.name << " has " << d.legs << " legs and says " << d.sound << ".\n";
        }
    }
}

int main()
{
    bool found = false;
    std::cout << "Enter an animal: ";
    std::string input;
    std::cin >> input;
    for (std::size_t index{0}; index < size(animals); ++index)
    {
        auto d = animals[index];
        if (input == d.name)
        {
            printAnimalData(d);
            found = true;
        }
    }
    if (!found)
    {
        std::cout << "That animal couldn't be found.\n";
    }
    printOtherAnimals(input);

    return 0;
}