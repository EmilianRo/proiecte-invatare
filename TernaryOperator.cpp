#include <iostream>

main()
{
    // ternary operator ?: replacement to an if/else statement
    // condition? expression1 : expression2;
    // conditie ? <secventa 1> : <secventa 2>
    int grade;

    std::cout << "What is your grade? ";
    std::cin >> grade;
    // if (grade > 49)
    //{
    //     std::cout << "You passed ";
    // }
    // else
    // {
    //    std::cout << "YOU FAILED" << std::endl;
    //}

    //                          SAU

    grade > 49 ? std::cout << "You passed " : std::cout << "YOU FAILED" << std::endl;
    //                                  ||
    std::cout << (grade > 49 ? "You passed " : "YOU FAILED");
    return 0;
}