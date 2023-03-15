#include <iostream>
#include <string>

int main()
{   
    setlocale(LC_ALL, "RU");
    std::string user_name;
    std::cout << "Введите имя пользователя: ";
    std::cin >> user_name;

    std::cout << "Здраствуйте, " <<user_name<< "!\n" << std::endl;
}
