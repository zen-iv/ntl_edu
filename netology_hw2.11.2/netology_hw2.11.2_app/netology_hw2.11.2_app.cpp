#include <iostream>
#include <string>
#include "Leaver.h"

int main() {
    setlocale(LC_ALL, "RU");

    std::string user_name;

    std::cout << "Введите имя: ";
    std::cin >> user_name;

    Messages::Leaver user_to_greet(user_name);
    user_to_greet.leave();

    return 0;
}