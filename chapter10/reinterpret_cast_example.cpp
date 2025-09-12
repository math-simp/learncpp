#include <iostream>

int main()
{
    unsigned int x = 3;
    float f = *reinterpret_cast<float *>(&x);

    std::cout << x << std::endl
              << f << std::endl;
    return 0;
}