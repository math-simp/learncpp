#include <iostream>

int main()
{
    short bombs{1}; // I can has bomb! (note: type is short)

    const int &you{bombs}; // You can has bomb too (note: type is int&)
    --bombs;               // Bomb all gone

    if (you) // You still has?
    {
        std::cout << "Bombs away!  Goodbye, cruel world.\n"; // Para bailar la bomba
        // This is hit because you is a const int& and therefore bound to a temporary object created from short bombs
    }

    return 0;
}