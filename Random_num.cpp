#include <iostream>
#include <ctime>

int main()
{
    // pseudo-random= not truly random (but close)

    srand(time(NULL));
    int num = (rand() % 20) + 1;
    std::cout << "You rolled a " << num << '\n';
    return 0;
}