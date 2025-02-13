#include <iostream>

/* function templates = describes what a function looks like.

                        Can be used to generate as many overloaded functions

                        as needed, each using different data types*/

template <typename T, typename U>

T max_temp(T x, T y)
{
    return (x > y) ? x : y; // ambele var trb sa fie de acelasi tip de date
}
auto max(T x, U y)
{
    return (x > y) ? x : y; // nu conteaza tipul var
}

/*double max(int x, int y)
{
    return (x > y) ? x : y;
}
char max(int x, int y)
{
    return (x > y) ? x : y;
}*/
int main()

{
    std::cout << max(1.1, 1.2) << '\n';
}