// TODO: Namespace = provides a solution for preventing name conflicts
//       in large projects. Each entity needs a unique name. A namespace
//       allows for identically named entities as long as the namespaces are different.

#include <string>
#include <vector>
#include <iostream>

// namespace first
//{
//    int x = 1;
//}

// namespace second
//{
//     int x = 2;
// }
int main()
{

    std::string name = "Emi";
    std::cout << "hello " << name << std::endl;
    // int x = 0;

    // std ::cout << x;
    //  std::cout << second ::x;

    return 0;
}