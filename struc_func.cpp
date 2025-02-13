#include <iostream>

using namespace std;
struct Cars
{
    string model;
    int age;
    string color;
};
void Read(Cars &car);
void Paint(Cars &car, string color);
int main()
{
    Cars car1;
    Cars car2;

    car1.model = "Mustang";
    car2.model = "Corvete";
    car1.age = 2017;
    car2.age = 2012;
    car1.color = "blue";
    car2.color = "red";

    Paint(car1, "silver");
    Paint(car2, "gold");

    Read(car1);
    Read(car2);

    return 0;
} // pass by value, should pass by reference (using & op, to not create a copyb)

void Read(Cars &car)
{
    cout << car.model << '\n';
    cout << car.age << '\n';
    cout << car.color << '\n';
}

void Paint(Cars &car, string color)
{
    car.color = color;
}
