#include <array>
#include <iostream>

template <typename T, std::size_t Row, std::size_t Col>
using Array2d = std::array<std::array<T, Col>, Row>;

template <typename T, std::size_t Row, std::size_t Col>
constexpr int rowLength(const Array2d<T, Row, Col> &)
{
    return Row;
}

template <typename T, std::size_t Row, std::size_t Col>
constexpr int colLength(const Array2d<T, Row, Col> &)
{
    return Col;
}

using A = std::array<std::array<int, 4>, 3>;

constexpr std::size_t rows = std::tuple_size<A>::value;
constexpr std::size_t cols = std::tuple_size<A::value_type>::value;

template <typename T>
struct dimensions;

template <typename T, std::size_t N>
struct dimensions<std::array<T, N>>
{
    static constexpr std::size_t first = N;
    using rest = dimensions<T>;
};

template <typename T>
struct dimensions
{
    static constexpr std::size_t first = 0;
};

using A3D = std::array<std::array<std::array<int, 5>, 0>, 3>;
using A4D = std::array<A3D, 4>;

constexpr auto d1 = dimensions<A4D>::first;                   // 4
constexpr auto d2 = dimensions<A4D>::rest::first;             // 3
constexpr auto d3 = dimensions<A4D>::rest::rest::first;       // 0
constexpr auto d4 = dimensions<A4D>::rest::rest::rest::first; // 5

int main()
{
    std::cout << "The dimensions of the array are: " << d1 << "x" << d2 << "x" << d3 << "x" << d4 << '\n';
    return 0;
}