#include <iostream>
#include <ctime>

int main()
{

    srand(time(NULL));
    int x = rand() % 10 + 1;
    int g;
    bool b = false;
    char end;
    std::cout << "****************Guess the random number generated****************\n";
    std::cout << "*******************Between 1 through 10**************************\n";
    std::cout << "****************You have 3 lives, use them wisely****************\n";
    std::cin >> g;
    // jos (l-1) pentru a ajunge la numarul de vieti dorit
    for (int l = 2; l >= 0; l--)
    {
        if (g != x)
        {

            std::cout << g << " Is not the correct number\n";
            if (l != 0)
            {
                std::cout << "Try again, you have " << l << " more lives/life\n";
            }
            std::cout << "chose another number: ";
            std::cin >> g;
        }
        else
        {
            std::cout << "*****************************YOU WIN*****************************\n";
            b = true;
        }
        if (b = true)
        {
            l = 0;
        }
    }
    if (b = false)
    {
        std::cout << "*************************The number was " << x << "*************************\n";
        std::cout << "*****************************YOU LOST****************************\n";
    }
    std::cout << "Press Enter to Exit";
    std::cin >> x;

    return 0;
}