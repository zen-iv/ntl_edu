#pragma once
#include "Triangle.h"
class Isosceles_triangle : public::Triangle
{
    //равнобедренный треугольник (стороны a и c равны, углы A и C равны);
public:
    Isosceles_triangle() {
        figure_name = triangle_name;
        a = t_a, b = t_b, c = t_c;
        A = t_A, B = t_B, C = t_C;
    }
protected:
    std::string triangle_name = "Равнобедренный треугольник: ";
    unsigned int t_a = 6, t_b = 3, t_c = 6;
    unsigned int t_A = 30, t_B = 120, t_C = 30;

    std::string correct() override;
};