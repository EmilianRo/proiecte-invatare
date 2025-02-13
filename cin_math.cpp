#include <iostream>
#include <cmath>
#include <string>

main()
{

    std::cout << "x= ";
    std::cin >> x;
    std::string name;
    std::cout << "What is ur name?";
    // std::cin >> name;
    std::getline(std::cin >> std::ws, name);
    // TODO: ↑↑↑ pentru stings care sunt formate din mai multe cuvinte
    std::cout << "Hello " << name << std::endl;

    double x = 3, y = 4, z;
    z = std::min(x, y);
    std::cout << z << std::endl;
    z = std::max(x, y);
    std::cout << z << std::endl;
    z = pow(2, 3);
    std::cout << z << std::endl;
    z = sqrt(9);
    std::cout << z << std::endl;
    z = std::abs(x); // este |x|
    std::cout << z << std::endl;
    z = round(3.14);
    std::cout << z << std::endl;
    z = floor(3.14); // rotunjit in jos
    std::cout << z << std::endl;
    z = ceil(3.14); // rotunjit in sus
    std::cout << z << std::endl;
}