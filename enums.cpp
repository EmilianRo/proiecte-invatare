#include <iostream>
using namespace std;

// enums = a user-defined data type that consists
//         of paired named-integer constants.
//         GREAT if you have a set of potential options
enum Day
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    fruday,
    saturday,
};
int main()
{
    // string day = "monday";
    Day today = sunday;
    switch (today)
    {
    case 0:
        cout << "It's sunday\n";

        break;
    case 1:
        cout << "It's monday\n";

        break;
    case 2:
        cout << "It's tuesday\n";

        break;
    case 3:
        cout << "It's wednesday\n";

        break;
    case 4:
        cout << "It's thursday\n";

        break;
    case 5:
        cout << "It's friday\n";

        break;
    case 6:
        cout << "It's saturday\n";

        break;
    default:
        break;
    }
}