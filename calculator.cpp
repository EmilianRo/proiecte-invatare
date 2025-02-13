#include <iostream>
#include <cmath>

main()
{
    double num1, num2, result, x;
    char op;
    bool ok = true;
    std::cout << "****************************CALCULATOR***************************" << std::endl;
    std ::cout << "What is Your first number? ";
    std ::cin >> num1;
    std::cout << "   What kind of operation would you like to do (+ - * / ^)? ";
    std::cin >> op;
    std::cout << "What is your second number? ";
    std::cin >> num2;
    while (ok == true)
    {
        switch (op)
        {
        case '+':
            result = num1 + num2;
            ok = false;
            break;
        case '-':
            result = num1 - num2;
            ok = false;
            break;
        case '/':
            result = num1 / num2;
            ok = false;
            break;
        case '*':
            result = num1 * num2;
            ok = false;
            break;
        case '^':
            result = pow(num1, num2);
            ok = false;
            break;
        default:
            std ::cout << "Invalid operation!!" << std::endl;
            std ::cout << "Please Enter a valid operator: " << std::endl;
            std::cin >> op;
            break;
        }
    }
    std::cout << result << std::endl;
    std::cout << "****************************************************************";
    std::cin >> x;
}
