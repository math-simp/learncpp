#include <iostream>
#include <string>

int main()
{
    int i = 1;
    int *pi = &i;
    int &ri = i;
    std::cout << std::boolalpha << (pi == &ri) << std::endl;

    std::string s = "A string";
    std::string *ps = &s;
    std::string &rs = s;
    std::cout << std::endl
              << "The pointer address of s: " << ps << std::endl;
    std::cout << "Does ps == &s? " << (ps == &s) << std::endl;
    std::cout << "Does ps == &rs? " << (ps == &rs) << std::endl;
}