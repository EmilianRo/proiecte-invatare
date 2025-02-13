#include <iostream>
#include <string>

main()
{
    std::string name;
    while (name.empty())
    {
        std::cout << "What is ur name? \n";
        std::getline(std::cin, name);
        if (name.empty())
        {
            std::cout << "You didn't write anything\n ";
        }
    }
    std::cout << "Hello " << name;
    int number;
    do
    {
        std::cout << "\n please enter a positive # ";
        std::cin >> number;

    } while (number > 0);
}
