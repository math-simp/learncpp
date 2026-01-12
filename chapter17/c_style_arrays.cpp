#include <iostream>
#include <array>

int main()
{
    int my_arr[] = {1, 2, 3};

    for (int count = 0; count < 3; count++)
    {
        std::cout << my_arr[count] << " ";
    }

    std::cout << std::endl;

    // C-style array intialized with 365 value-initalized int elements
    int daysOfTheYear[365] = {};
    /**
     * Equivalently:
     * int daysOfTheYear[365];
     * for (int i = 0; i < 365; ++i)
     *    daysOfTheYear[i] = 0;
     */

    // Optional: Specifying the size of the array
    // However, compiler must be able to deduce the size of the array
    double grades[] = {85.2, 91.5, 73.4, 77.8, 88.1, 90.3, 83.7};

    int arr1[5];                   // default initialized (elements are uninitialized)
    double arr2[5]{};              // value initialized (all elements are zero) --> preferred
    int arr3[5]{1, 2, 3};          // arr3[3], arr3[4] are value initialized
    int arr4[5]{1, 2, 3, 4, 5, 6}; // compile error: too many initializers
    int arr5[]{1, 2, 3, 4, 5, 6};  // valid; length of array is deduced
    auto arr6[5]{1, 2, 3, 4, 5};   // compile error: can't use auto to deduce type on C-style arrays

    const int fibonnaci[] = {0, 1, 1, 2, 3, 5}; // copy-list initialization using braced list
    int prime[5]{2, 3, 5, 7, 11};               // list initialization using braced list --> preferred

    const int arr[]{9, 8, 7, 6, 5};
    const int length = sizeof(arr) / sizeof(int);

    int s{2};
    std::cout << arr[s] << '\n'; // okay to use signed index

    unsigned int u{2};
    std::cout << arr[u] << '\n'; // okay to use unsigned index

    int t{-1};
    std::cout << arr[t] << '\n'; // undefined behavior

    std::cout << arr1[0] << arr2[0] << arr3[0] << arr4[0] << fibonnaci[0] << prime[0];

    return 0;
}