#include <iostream>
using namespace std;

bool isValid(long long num);
int sumOdd(long long num);
int sumEven(long long num);

int main()
{
    long long num;
    cout << "Enter card number: ";
    cin >> num;

    if (isValid(num))
    {
        cout << "Valid card\n";
    }
    else
    {
        cout << "Invalid card\n";
    }
    return 0;
}

bool isValid(long long num)
{
    int result = sumOdd(num) + sumEven(num);
    return (result % 10 == 0);
}

int sumOdd(long long num)
{
    int result = 0;
    int pos = 1; // Start at the rightmost digit (position 1)

    while (num > 0)
    {
        if (pos % 2 != 0) // If position is odd (1st, 3rd, 5th...)
        {
            result += num % 10; // Add the last digit
        }
        num /= 10; // Remove last digit
        pos++;
    }
    return result;
}

int sumEven(long long num)
{
    int result = 0;
    int pos = 1;

    while (num > 0)
    {
        if (pos % 2 == 0) // If position is even (2nd, 4th, 6th...)
        {
            int doubled = (num % 10) * 2; // Double the digit
            if (doubled > 9)
            {
                result += (doubled % 10) + (doubled / 10); // Add both digits
            }
            else
            {
                result += doubled;
            }
        }
        num /= 10;
        pos++;
    }
    return result;
}
