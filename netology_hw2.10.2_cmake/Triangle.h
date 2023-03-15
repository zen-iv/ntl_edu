#pragma once
#include "Figure.h"
class Triangle :public ::Figure
{
public:
    Triangle() { a = 10; b = 10; c = 10; A = 60; B = 60; C = 60; };
    Triangle(int corners, int u_a, int u_b, int u_c, int u_A, int u_B, int u_C) {
        figure_name = "Триугольник: ";
        corners_count = corners;
        a = u_a; b = u_b; c = u_c; A = u_A; B = u_B; C = u_C;
        correct();
    }
    void return_figure() override;

protected:
    std::string figure_name;
    int a, b, c; //length
    int A, B, C; //angle

    void correct() override;
};