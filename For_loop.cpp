#include <iostream>

int main()
{
    for (int i = 0; i <= 10; i += 2)
    {
        std::cout << i << '\n';
    }
    std::cout << "Happy new year!\n";
    for (int f = 10; f <= 0; f--)
    {
        std::cout << f << '\n';
    }

    return 0;
}