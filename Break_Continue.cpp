#include <iostream>

int main()
{
    // break =exit a loop
    //  continue = skip iteration / skip a step in a loop
    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            // break;
            continue;
        }
        std::cout << i << '\n';
    }
}