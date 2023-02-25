#include <iostream>
#include <string>
#include "Count.h"

int main()
{
    Count counting;
    std::string start_value;

    std::cout << "Вы хотите указать начальное значение счётчика ? Введите (y)es или (n)o : ";
    std::cin >> start_value;

    if (start_value == "y" || start_value == "Y" || start_value == "yes" || start_value == "Yes" || start_value == "(y)es")
    {
        std::cout << "Введите начальное значение счётчика : ";
        int user_num;
        std::cin >> user_num;
        counting.u_input(user_num);
    }
    char x;
    for (;;)
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> x;
        switch (x)
        {
        case '+':
            counting.incr();
            continue;
        case '-':
            counting.decr();
            continue;
        case '=':
            std::cout << counting.nowis() << std::endl;
            continue;
        case 'x':
            break;
        default:
            std::cout << counting.nowis() << std::endl;
            std::cout << "Такой команды нет! ";
            continue;
        }
        break;
    }
    std::cout << "\nДо свидания! ";
}
