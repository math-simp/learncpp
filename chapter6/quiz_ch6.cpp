#include <iostream>
#include <string>

// Write the function getQuantityPhrase() here
std::string getQuantityPhrase(const int quantityOfApples)
{
    if (quantityOfApples < 0)
    {
        return "negative";
    }
    else if (quantityOfApples == 0)
    {
        return "no";
    }
    else if (quantityOfApples == 1)
    {
        return "a single";
    }
    else if (quantityOfApples == 2)
    {
        return "a couple";
    }
    else if (quantityOfApples == 3)
    {
        return "a few";
    }
    else if (quantityOfApples > 3)
    {
        return "many";
    }

    return "ERROR";
}

// Write the function getApplesPluralized() here
std::string getApplesPluralized(const int quantityOfApples)
{
    if (quantityOfApples == 1)
    {
        return "apple";
    }
    else
    {
        return "apples";
    }
}

int main()
{
    constexpr int maryApples{3};
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    while (true) // try this a bunch of times
    {
        std::cout << "How many apples do you have? ";
        int numApples{};
        std::cin >> numApples;

        std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";
    }

    return 0;
}