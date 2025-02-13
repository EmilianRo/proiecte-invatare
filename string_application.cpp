#include <iostream>
#include <string>

main()
{

    std::string name;
    std::cout << "Enter your name:\n ";
    std::getline(std::cin, name);
    if (name.empty())
    {
        std::cout << "N/A\n";
    }
    else if (name.length() > 30)
    {
        std::cout << "Doo your parents hate you?\n ";
    }
    else
    {
        std::cout << "Hello, " << name << "\n";
    }
    // name.clear(); sterge input-ul
    // name.append("@gmail.com");
    // std::cout << name << "\n";
    // return 0;
    std::cout << name.at(0) << "\n";
    name.insert(0, "@");
    std::cout << name.find(" ");
    name.erase(0, 3);
}
