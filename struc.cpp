#include <iostream>
/*struct = A structure that group related variables under one name
            structs can contain many different data types,
            variables in a struct are known as "members".
            members can be access with . "Class Member Access Operator"
*/
struct student
{
    std::string name;
    double gpa;
    bool enrolled;
};

int main()
{
    student student1;
    student student2;
    student1.name = Gabi;
    student1.gpa = 3.2;
    student1.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.enrolled << '\n';

    student2.name = Emi;
    student2.gpa = 4.6;
    student2.enrolled = true;

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.enrolled << '\n';
}