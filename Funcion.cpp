#include <iostream>
// pt ca functia sa stie de ce se intampla in main(tot function) trb sa ii zici
// in paranteze ce informatie vrei sa se transmit
void HappyBDay(std::string name, int age);
int main()
{
    std::string name = "Emi";
    int age = 15;
    // function = block of reuseable code
    HappyBDay(name, age);
    return 0;
}
// eroare daca function nu e declarata, dar poate fi atribuita mai tarziu
void HappyBDay(std::string name, int age)
{
    std::cout << "Happy Birthday to" << name << '\n';
    std::cout << "Happy Birthday to" << name << '\n';
    std::cout << "Happy Birthday dear" << name << '\n';
    std::cout << "Happy Birthday to" << name << '\n';
    std::cout << "You are" << age << "years old \n";
}