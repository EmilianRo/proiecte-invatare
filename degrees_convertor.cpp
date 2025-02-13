#include <iostream>

main()
{
    double degree, result;
    const double kelvin = 273.15;
    char type, conversion, error;
    bool k = true, k1 = false;
    int x;

    std::cout << "********************DEGREE CALCULATOR********************** " << std::endl;
    std::cout << "What kind of degree do you want to be converted(K,C,F)\n";
    std::cin >> type;
    std::cout << type << " to (K,C,F)\n ";
    std::cin >> conversion;
    std::cout << "how many degrees do you want to be converted\n";
    std::cin >> degree;
    if (type == 'k')
        type = 'K';
    else if (type == 'c')
        type = 'C';
    else if (type == 'f')
        type = 'F';
    if (conversion == 'k')
        conversion = 'K';
    else if (conversion == 'c')
        conversion = 'C';
    else if (conversion == 'f')
        conversion = 'F';
    while (k)
    {
        switch (type)
        {
        case 'K':
            switch (conversion)
            {
            case 'C':
                result = degree - kelvin;
                k = false;
                break;
            case 'F':
                result = (degree - kelvin) * 1.8 + 32;
                k = false;
                break;
            }
            break;
        case 'C':
            switch (conversion)
            {
            case 'K':
                result = degree + kelvin;
                k = false;
                break;
            case 'F':
                result = degree * 1.8 + 32;
                k = false;
                break;
            }
            break;
        case 'F':
            switch (conversion)
            {
            case 'K':
                result = degree + kelvin;
                k = false;
                break;
            case 'C':
                result = (degree - 32) / 1.8;
                k = false;
                break;
            }
            break;
        default:
            std::cout << "You chose the same degree you want to convert, to the converted one \n";
            std::cout << "Your result is the same with the inputted amount\n ";
            std::cout << "would you like to change the type of degree(Y/N)?\n ";
            std::cin >> error;
            if (error == 'Y')
            {
                std::cout << "In what kind of degree would you like to change?\n ";
                std::cin >> conversion;
            }
            else
            {
                k = false;
                k1 = true;
            }
            break;
        }
    }
    !k1 ? std::cout << "Your result is: " << result << std::endl : std::cout << " \n";
    std::cout << "***********************************************************\n";
    std::cin >> x;
}