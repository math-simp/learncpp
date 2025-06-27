#include <iostream>

void d()
{ // here
    int x = 1;
}

void c()
{
}

void b()
{
    c();
    d();
}

void a()
{
    b();
}

int main()
{
    a();

    return 0;
}