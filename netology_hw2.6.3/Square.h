#pragma once
#include "Quadrilateral.h"
class Square :public::Quadrilateral
{
public:
    Square() {
        figure_name = quad_name;
        a = t_a, b = t_b, c = t_c, d = t_d;
        A = t_A, B = t_B, C = t_C, D = t_D;
    }
protected:
    std::string quad_name = "Квадрат: ";
    unsigned int t_a = 45, t_b = 45, t_c = 45, t_d = 45;
    unsigned int t_A = 90, t_B = 90, t_C = 90, t_D = 90;

    std::string correct() override;
};

