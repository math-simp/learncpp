#include <iostream>

void printElementZero(int arr[1000])
{
    std::cout << arr[0] << '\n';
}

int main()
{
    int x[2]{5};
    printElementZero(x);

    int y[1001]{5};
    printElementZero(y);

    int z[1]{5};
    printElementZero(z);

    return 0;
}