#include <iostream>

int initX(); // forward declaration
int initY(); // forward declaration

int g_x{initX()}; // g_x is initialized first
int g_y{initY()};

int initX()
{
    return g_y; // g_y isn't initialized when this is called
}

int initY()
{
    return 5;
}

int main()
{
    std::cout << g_x << ' ' << g_y << '\n';
}

/**
 * Given two files, a.cpp and b.cpp, either could have its global variables
 * initialized first. If some variable with static duration in a.cpp is
 * initialized with a static duration variable defined in b.cpp,
 * there’s a 50% chance that the variable in b.cpp won’t be initialized yet.
 */