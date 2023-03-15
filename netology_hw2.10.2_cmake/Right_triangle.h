#pragma once
#include "Triangle.h"
class Right_triangle : public::Triangle
{ //прямоугольный треугольник (угол C всегда равен 90);
public:
    Right_triangle() {};
    Right_triangle(int corners, int u_a, int u_b, int u_c, int u_A, int u_B, int u_C) {
        figure_name = triangle_name;
        corners_count = corners;
        a = u_a, b = u_b, c = u_c;
        A = u_A, B = u_B, C = u_C;
        correct();
    }
protected:
    std::string triangle_name = "Прямоугольный треугольник: ";

    void correct() override;
};