#include <iostream>
using namespace std;
int main()
{
    int temp;
    int arr[10];
    bool looping;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < sizeof(arr) / sizeof(int) - 1; i++)
    {
        looping = false;
        for (int num : arr)
        {
            cout << num << " ";
        }
        cout << '\n';
        for (int j = 1; j < sizeof(arr) / sizeof(int) - i; j++)
        {

            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                looping = true;
            }
            for (int num : arr)

            {
                cout << num << " ";
            }
            cout << '\n';
        }
        if (!looping)
            break;
    }
    for (int num : arr)
    {
        cout << num << " ";
    }
}
