#include <iostream>

int main()
{
    const double PI = 3.14159;
    const int speed_Light = 10 ^ 9 * 3;
    const int heigh = 1920;
    const int width = 1080;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << "cm";

    return 0;
}