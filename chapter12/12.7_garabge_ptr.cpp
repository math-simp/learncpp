#include <iostream>

int main()
{
    int x{5};

    int *ptr;       // an uninitialized pointer (holds a garbage address)
    int *ptr2 = &x; // a null pointer (we'll discuss these in the next lesson)
    int *ptr3{&x};  // a pointer initialized with the address of variable x

    std::cout << *ptr << std::endl;
    std::cout << *ptr2 << std::endl;
    std::cout << *ptr3 << std::endl;

    return 0;
}