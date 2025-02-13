// recursion = when u call a function within a functiion,
// looks cleaner and easier to read but uses more memory and is slower + u can run into a stack overflow
// iterate !=recursion
#include <iostream>
int I_Factorial(int num);
int R_Factorial(int num);
int main()
{
    int x;
    std::cin >> x;
    std::cout << I_Factorial(x) << '\n';
    std::cout << R_Factorial(x);
}
int I_Factorial(int num) // iterate
{
    int result = 1;
    for (int i = num; i != 0; i--)
    {
        result *= i;
    }
    return result;
}
int R_Factorial(int num) // recursive
{
    int result = 1;
    if (num > 0)
    {
        return num * R_Factorial(num - 1);
    }
    else
    {
        return 1;
    }
}