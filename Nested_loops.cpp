#include <iostream>

int main()
{

    // repetitiva in repetitiva

    int x = 1, k = 3;

    while (k != 0)
    {
        while (x <= 10)
        {
            std::cout << x << '\n';
            x++;
        }
        x = 1;
        k--;
    }
    std::cout << '\n';
    /// sau

    for (k = 3; k != 0; k--)
    {
        for (x = 1; x <= 10; x++)
        {
            std::cout << x << '\n';
        }
    }
}