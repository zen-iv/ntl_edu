#pragma once
#include "Quadrilateral.h"
class Square :public::Quadrilateral
{
public:
    Square() {};
    Square(int corners, int u_a, int u_b, int u_c, int u_d, int u_A, int u_B, int u_C, int u_D) {
        figure_name = quad_name;

        corners_count = corners;
        a = u_a, b = u_b, c = u_c, d = u_d;
        A = u_A, B = u_B, C = u_C, D = u_D;
        correct();
    }
protected:
    std::string quad_name = " вадрат: ";

    void correct() override;
};