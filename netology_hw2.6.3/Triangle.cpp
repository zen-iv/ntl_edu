#include "Triangle.h"

std::string Triangle::correct() {
    if ((corners_count == 3) && (A + B + C == 180))
    {
        return "Правильная";
    }
    else {
        return "Неправильная";
    }
}

void Triangle::return_figure()  {
    std::cout << figure_name << std::endl;
    std::cout << correct() << std::endl;
    std::cout << "Кол-во углов: " << corners_count << std::endl;
    std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
    std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;
    std::cout << std::endl;
}