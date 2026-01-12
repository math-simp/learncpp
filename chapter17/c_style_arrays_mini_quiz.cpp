#include <iostream>

int main()
{
    int size = 4;
    int arr[size] = {10, 20, 30, 40};

    std::cout << arr[size] << '\n';

    arr[0] = 5;
    arr = nullptr;

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << ' ';
    }

    return 0;
}
