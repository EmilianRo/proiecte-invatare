#include <iostream>
using namespace std;

int main()
{
    int n[100], save[100], k, s, temp;
    int min = 999, max = 0;

    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> n[i];
    }

    for (int i = 0; i < k; i++)
    {
        s = 0;
        for (int j = 2; j <= n[i]; j++)
        {
            if (n[i] % j == 0)
            {
                s++;
            }
        }
        save[i] = s;
        if (s < min)
            min = s;
        if (s > max)
            max = s;
    }

    for (int current_div = min; current_div <= max; current_div++)
    {
        temp = 0;
        for (int i = 0; i < k; i++)
        {
            if (save[i] == current_div)
                temp++;
        }
        if (temp != 0)
        {
            cout << "exista " << temp << " numere care au " << current_div << " divizori\n";
        }
    }

    return 0;
}