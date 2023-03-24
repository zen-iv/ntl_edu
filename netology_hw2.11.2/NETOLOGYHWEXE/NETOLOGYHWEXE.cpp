#include <iostream>
#include <string>
#include "NETOLOGYHWDLL.h"
#include <windows.h>

int main() {
    setlocale(LC_ALL, "RU");

    std::string user_name;

    std::cout << "Введите имя: ";
    std::cin >> user_name;

    Leaver user_to_greet(user_name);
    user_to_greet.leave();
    system("pause");

    return 0;
}