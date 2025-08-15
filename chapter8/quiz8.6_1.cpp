#include <iostream>

// Write a function called calculate() that takes two integers and a char representing
// one of the following mathematical operations: +, -, *, /, or % (remainder). Use a switch
// statement to perform the appropriate mathematical operation on the integers, and return the result.
// If an invalid operator is passed into the function, the function should print an error message.
// For the division operator, do an integer division, and don’t worry about divide by zero.
//
// Hint: “operator” is a keyword, variables can’t be named “operator”.

int calculate(int z1, int z2, char c)
{
    switch (c)
    {
    case '+':
        return z1 + z2;
    case '-':
        return z1 - z2;
    case '*':
        return z1 * z2;
    case '/':
        return z1 / z2;
    case '%':
        return z1 % z2;
    default:
        std::cout << "ERROR. Invalid operator passed into function 'calculate(int, int, char)'." << std::endl;
        break;
    }

    return -1;
}

int main()
{
    std::cout << calculate(323131, -4124, '+') << std::endl;

    return 0;
}