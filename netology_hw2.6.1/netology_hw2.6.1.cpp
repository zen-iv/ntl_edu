#include <iostream>
#include "Header.h"

int main()
{
    int a = 0, b = 0, c = 0;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> c;
    Calc usecalc;
    switch (c)
    {
    case 1:
        std::cout << a << " + " << b << " = " << usecalc.sum(a, b) << std::endl;
        break;
    case 2:
        std::cout << a << " - " << b << " = " << usecalc.dif(a, b) << std::endl;
        break;
    case 3:
        std::cout << a << " * " << b << " = " << usecalc.multiply(a, b) << std::endl;
        break;
    case 4:
        std::cout << a << " / " << b << " = " << usecalc.division(a, b) << std::endl;
        break;
    case 5:
        std::cout << a << " ^ " << b << " = " << usecalc.power(a, b) << std::endl;
        break;
    default:
        std::cout << "Ошибка при выборе операции, попробуйте значение из списка." << std::endl;
        break;
    }

}

