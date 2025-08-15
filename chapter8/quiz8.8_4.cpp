#include <iostream>

int main()
{
    int outer{1};
    while (outer <= 5)
    {
        int inner{5};
        while (inner > 0)
        {
            if (outer - inner < 0)
                std::cout << ' ' << ' ';
            else
                std::cout << ' ' << inner;
            --inner;
        }

        std::cout << '\n';
        ++outer;
    }

    return 0;
}