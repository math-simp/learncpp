#include <iostream>
#include <string>

const std::string &getProgramName()
{
    const std::string programName{"Calculator"}; // now a non-static local variable, destroyed when function ends

    return programName;
}

const int &returnByConstReference()
{
    return 5; // returns const reference to temporary object
}

const int &returnByConstReference(const int &ref)
{
    return ref;
}

int main()
{
    // std::cout << "This program is named " << getProgramName(); // undefined behavior
    const int &ref{returnByConstReference()};

    std::cout << ref;                           // undefined behavior
    const int &ref1{5};                         // direct binding
    const int &ref2 = 5;                        // direct binding
    const int &ref3{returnByConstReference(5)}; // binds to dangling reference

    return 0;
}