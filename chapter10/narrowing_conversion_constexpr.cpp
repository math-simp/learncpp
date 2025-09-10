#include <iostream>

int someVal(int x)
{
    return x;
}

int main()
{
    int s = someVal(s);
    std::cout << s << std::endl;

    constexpr int n1{5}; // note: constexpr
    unsigned int u1{n1}; // okay: conversion is not narrowing due to exclusion clause

    constexpr int n2{-5}; // note: constexpr
    // unsigned int u2{n2};  // compile error: conversion is narrowing due to value change

    return 0;
}