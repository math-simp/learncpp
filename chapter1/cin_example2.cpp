#include <iostream> // for std::cout and std::cin

int main()
{
    std::cout << "Enter three numbers: ";
    int x{}, y{}, z{};
    std::cin >> x >> y >> z;
    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
    return 0;
}