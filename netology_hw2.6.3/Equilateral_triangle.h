#pragma once
#include "Triangle.h"
class Equilateral_triangle : public::Triangle
{
    //равносторонний треугольник(все стороны равны, все углы равны 60);
public:
    Equilateral_triangle() {
        figure_name = triangle_name;
        a = t_a, b = t_b, c = t_c;
        A = t_A, B = t_B, C = t_C;
    }
protected:
    std::string triangle_name = "Равносторонний треугольник: ";
    unsigned int t_a = 5, t_b = 5, t_c = 5;
    unsigned int t_A = 60, t_B = 60, t_C = 60;

    std::string correct() override;
};

