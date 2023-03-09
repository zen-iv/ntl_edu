#pragma once
#include "Quadrilateral.h"
class Parallelogram :public::Quadrilateral
{
public:
    Parallelogram() {
        figure_name = quad_name;
        a = t_a, b = t_b, c = t_c, d = t_d;
        A = t_A, B = t_B, C = t_C, D = t_D;
    }
protected:
    std::string quad_name = "ֿאנאככוכמדנאלל: ";
    unsigned int t_a = 25, t_b = 100, t_c = 25, t_d = 100;
    unsigned int t_A = 45, t_B = 135, t_C = 45, t_D = 135;

    std::string correct() override;
};