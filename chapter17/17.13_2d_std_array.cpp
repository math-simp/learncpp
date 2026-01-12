#include <array>
#include <iostream>

template <typename T, std::size_t Row, std::size_t Col>
using Array2d = std::array<std::array<T, Col>, Row>;

template <typename T, std::size_t Row, std::size_t Col, std::size_t Depth>
using Array3d = std::array<std::array<std::array<T, Depth>, Col>, Row>;

template <typename T, std::size_t Row, std::size_t Col>
void printArray(const Array2d<T, Row, Col> &arr)
{
    for (const auto &arow : arr)
    {
        for (const auto &e : arow)
            std::cout << e << ' ';

        std::cout << '\n';
    }
}

template <typename T, std::size_t Row, std::size_t Col, std::size_t Depth>
void printArray(const Array3d<T, Row, Col, Depth> &arr)
{
    for (const auto &arow : arr)
    {
        for (const auto &acol : arow)
        {
            for (const auto &e : acol)
                std::cout << e << ' ';
        }

        std::cout << '\n';
    }
}

int main()
{
    Array2d<int, 3, 4> arr1{{{1, 2, 3, 4},
                             {5, 6, 7, 8},
                             {9, 10, 11, 12}}};

    Array3d<int, 2, 0, 2> arr2{};

    arr2[0][0][0] = 4;

    printArray(arr2);

    std::array<std::array<int, 4>, 3> a{};
    constexpr std::size_t rows = a.size();
    constexpr std::size_t cols = a[0].size();

    using Bad = std::array<std::array<int, 4>, 0>;
    Bad b{};
    std::cout << "b[0].size: " << b[0].size() << '\n'; // undefined behavior

    return 0;
}