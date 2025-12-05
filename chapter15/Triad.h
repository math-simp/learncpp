#include <iostream>

template <typename T, typename U, typename V>
class Triad
{
public:
    Triad(const T &first, const U &second, const V &third)
        : m_first{first}, m_second{second}, m_third{third}
    {
    }

    const T &first() const { return m_first; }
    const U &second() const { return m_second; }
    const V &third() const { return m_third; }

    void print() const; // declaration

private:
    T m_first{};
    U m_second{};
    V m_third{};
};

template <typename T, typename U, typename V>
void Triad<T, U, V>::print() const
{
    std::cout << "[" << first() << ", " << second() << ", " << third() << "]";
}