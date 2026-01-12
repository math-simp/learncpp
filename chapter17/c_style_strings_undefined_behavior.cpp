#include <cstring>
#include <iostream>

int main()
{
    char s1[] = "hellooo";
    std::cout << strlen(s1) << '\n'; // prints 5

    char s2[5] = {'h', 'e', 'l', 'l', 'o'};
    std::cout << strlen(s2) << '\n'; // undefined behavior

    std::cout << s2 << '\n'; // undefined behavior

    char str[]{"string"};
    std::cout << str << '\n'; // prints string
    str[1] = 'p';
    std::cout << str << '\n'; // prints spring

    char rolls[255]{}; // declare array large enough to hold 254 characters + null terminator
    std::cout << "Enter your rolls: ";
    std::cin >> rolls;
    std::cout << "You entered: " << rolls << '\n';
}
