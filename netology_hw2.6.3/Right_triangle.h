#pragma once
#include "Triangle.h"
class Right_triangle : public::Triangle
{ //прямоугольный треугольник (угол C всегда равен 90);
public:
    Right_triangle() {
        figure_name = triangle_name;
        a = t_a, b = t_b, c = t_c;
        A = t_A, B = t_B, C = t_C;
    }
protected:
    std::string triangle_name = "Прямоугольный треугольник: ";
    unsigned int t_a = 4, t_b = 6, t_c = 3;
    unsigned int t_A = 45, t_B = 45, t_C = 90;

    std::string correct() override;
};

