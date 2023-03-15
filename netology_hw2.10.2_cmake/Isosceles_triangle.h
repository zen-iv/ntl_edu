#pragma once
#include "Triangle.h"
class Isosceles_triangle : public::Triangle
{
    //равнобедренный треугольник (стороны a и c равны, углы A и C равны);
public:
    Isosceles_triangle() {};
    Isosceles_triangle(int corners, int u_a, int u_b, int u_c, int u_A, int u_B, int u_C) {
        figure_name = triangle_name;
        corners_count = corners;
        a = u_a, b = u_b, c = u_c;
        A = u_A, B = u_B, C = u_C;
        correct();
    }
protected:
    std::string triangle_name = "Равнобедренный треугольник: ";

    void correct() override;
};