#include <iostream>
#include <limits>
#include <string>

class Ball
{
private:
    double m_radius;
    double m_mass;

public:
    Ball(double r, double m) : m_radius(r), m_mass(m) {}
    void bounce() {};
};

int main()
{
    int arr1[] = {1, 2, 3};

    int arrr[2][3]{{1, 2, 3}, {4, 5, 6}};

    int arr3[3][3][3]{};

    int array1[][5]{// ok
                    {1, 2, 3, 4, 5},
                    {6, 7, 8, 9, 10},
                    {11, 12, 13, 14, 15}};

    // int array2[][]{// compile error!
    //                {1, 2, 3, 4},
    //                {5, 6, 7, 8}};

    // Ball arr4[][2] = {{Ball(1, 2), Ball(1.61803, 3.1415)},
    //                   {Ball(0.5, 0.1), Ball(std::numeric_limits<double>::max, std::numeric_limits<double>::infinity)}};

    int arr[3][4]{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    // double for-loop with indices
    for (std::size_t row{0}; row < std::size(arr); ++row) // std::size(arr) returns the number of rows
    {
        for (std::size_t col{0}; col < std::size(arr[0]); ++col) // std::size(arr[0]) returns the number of columns
            std::cout << arr[row][col] << ' ';

        std::cout << '\n';
    }

    return 0;
}