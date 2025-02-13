#include <iostream>

main()
{

    //      type-conversion = conversion a value of one data type to another
    //      Implicit = automatic
    //      Explicit = Precede value with new data type (int) x

    int correct;
    const int questions = 20;
    std::cout << "correct = ";
    std::cin >> correct;
    double score = correct / (double)questions * 100;
    // double score = correct / questions * 100; = face div, nu ne preia zecimala
    std::cout << "your score is " << score << "%" << std::endl;
}