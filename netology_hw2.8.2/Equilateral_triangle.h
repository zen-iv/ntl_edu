#pragma once
#include "Triangle.h"
class Equilateral_triangle : public::Triangle
{
    //равносторонний треугольник(все стороны равны, все углы равны 60);
public:
    Equilateral_triangle() {};
    Equilateral_triangle(int corners, int u_a, int u_b, int u_c, int u_A, int u_B, int u_C) {
        figure_name = triangle_name;
        corners_count = corners;
        a = u_a, b = u_b, c = u_c;
        A = u_A, B = u_B, C = u_C;
        correct();
    }
protected:
    std::string triangle_name = "Равносторонний треугольник: ";

    void correct() override;
};