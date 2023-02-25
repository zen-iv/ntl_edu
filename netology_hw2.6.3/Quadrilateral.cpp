#include "Quadrilateral.h"

std::string Quadrilateral::correct() {
    if ((corners_count == 4) && (A + B + C + D == 360))
    {
        return "Правильная";
    }
    else {
        return "Неправильная";
    }
}
void Quadrilateral::return_figure() {
    std::cout << figure_name << std::endl;
    std::cout << correct() << std::endl;
    std::cout << "Кол-во углов: " << corners_count << std::endl;
    std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << " " << "d = " << d << std::endl;
    std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << " " << "D = " << D << std::endl;
    std::cout << std::endl;
}
