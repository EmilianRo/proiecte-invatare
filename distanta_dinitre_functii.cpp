

#include <iostream>
#include <cmath>

int main()
{
    double x1, x2, y1, y2, AB, m;
    std::cout << "x1: ";
    std::cin >> x1;
    std::cout << "y1: ";
    std::cin >> y1;
    std::cout << "x2: ";
    std::cin >> x2;
    std::cout << "y2: ";
    std::cin >> y2;
    AB = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    std::cout << "AB: " << AB << '\n';
    AB = pow(AB, 2);
    std::cout << "AB: " << AB << '\n';
    std::cin >> m;
    return 0;
}
