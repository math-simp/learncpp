#include <iostream>
#include <string>
#include <string_view>

void printStringView(const std::string_view sv)
{
    std::cout << "My string view says: " << sv << "\n";
}

std::string getName()
{
    std::string s{"Alex"};
    return s;
}

int main()
{

    std::string s1{"hi!!!"};
    std::string_view sv1 = s1;
    printStringView(sv1);

    s1 = "bye! :(";
    printStringView(sv1); // undefined behavior
    sv1 = s1;             // revalidate
    printStringView(sv1);

    s1.clear();
    printStringView(sv1); // undefined behavior
    sv1 = s1;             // revalidate
    printStringView(sv1);

    std::cout << std::endl;

    std::string s2{"Hello, world!"};
    std::string_view sv2{s2}; // sv is now viewing s
    printStringView(sv2);

    s2 = "Hello, universe!"; // modifies s, which invalidates sv (s is still valid)
    printStringView(sv2);    // undefined behavior

    sv2 = s2;             // revalidate sv: sv is now viewing s again
    printStringView(sv2); // prints "Hello, universe!"

    return 0;
}