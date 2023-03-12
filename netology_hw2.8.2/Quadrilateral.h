#pragma once
#include "Figure.h"
class Quadrilateral :public ::Figure
{
public:
    Quadrilateral() { a = 12; b = 16; c = 18, d = 14; A = 85; B = 45; C = 100, D = 130; };
    Quadrilateral(int corners, int u_a, int u_b, int u_c, int u_d, int u_A, int u_B, int u_C, int u_D) {
        figure_name = "Четырехугольник: ";
        corners_count = 4;

        corners_count = corners;
        a = u_a, b = u_b, c = u_c, d =  u_d;
        A = u_A, B = u_B, C = u_C, D = u_D;
        correct();
    }
    void return_figure() override;
protected:
    unsigned int a, b, c, d; //length
    unsigned int A, B, C, D; //angle

    void correct() override;
};