int getNumber()
{
    return 0;
}

int main()
{
    // char a{'q'};
    // const int b{0};
    // const double c{5.0};
    // const int d{a * 2};       // a defined as char a { 'q' };
    // const int e{c + 1.0};     // c defined as const double c { 5.0 };
    // const int f{d * 2};       // d defined as const int d { 0 };
    // const int g{getNumber()}; // getNumber returns an int by value
    // const int h{};

    const double a{1.2};         // not a constant expression
    constexpr double b{1.2};     // constant expression so can be used in constant expressions!
    constexpr double c{b + 1.0}; // okay; a constant expression in the initializer!
    // constexpr double d{a + 1.0}; // not okay!

    const int e{1};         // not a constant expression
    constexpr int f{1};     // constant expression so can be used in constant expressions!
    constexpr int g{f + 1}; // okay; a constant expression in the initializer!
    constexpr int h{a + 1}; // also okay!

    return 0;
}