#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    int num = (rand() % 4) + 1;

    switch (num)
    {
    case 1:
        std::cout << "totul e bine";
        break;
    case 2:
        std::cout << "ploua";
        break;
    case 3:
        std::cout << "bate vantul usor";
        break;
    case 4:
        for (int a = 10; a >= 1; a--)
        {
            std::cout << "TORNADA, COD ROSU, *sunet de sirena*\n";
        }
    }

    return 0;
}