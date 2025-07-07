#include <cassert>
#include <iostream>

double enterFloatingPointNumber()
{
    double x{};
    std::cout << "Enter a double: ";
    std::cin >> x;
    return x;
}

char getMathematicalSymbol()
{
    char c{};
    while (true)
    {
        std::cout << "Enter +, -, *, or /: ";
        std::cin >> c;

        if (c == '+' || c == '-' || c == '*' || c == '/')
            return c;

        std::cerr << "Invalid input. Please try again.\n";
    }
}

double doMath(double x, double y, char c)
{
    assert(!(c != '+' && c != '-' && c != '*' && c != '/'));

    switch (c)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        std::cerr << "Uh-oh. Something bad happened." << std::endl;
        return 1 / 0;
    }
}

void printResult(double x, double y, char c)
{
    double result{doMath(x, y, c)};
    std::cout << x << " " << c << " " << y << " is " << result << "\n\n";
}

int main()
{
    double x{enterFloatingPointNumber()}, y{enterFloatingPointNumber()};
    char c{getMathematicalSymbol()};
    printResult(x, y, c);

    return 0;
}