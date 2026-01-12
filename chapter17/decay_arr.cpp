#include <iostream>

void printElementZero(const int arr[]) // treated the same as const int*
{
    std::cout << arr[0];
}

int main()
{
    const int prime[]{2, 3, 5, 7, 11};
    const int squares[]{1, 4, 9, 25, 36, 49, 64, 81};

    printElementZero(prime);   // prime decays to a pointer
    printElementZero(squares); // squares decays to a pointer

    return 0;
}