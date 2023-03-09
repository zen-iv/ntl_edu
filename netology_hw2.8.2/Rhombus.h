#pragma once
#include "Quadrilateral.h"
class Rhombus :public::Quadrilateral
{
public:
    Rhombus() {
        figure_name = quad_name;
        a = t_a, b = t_b, c = t_c, d = t_d;
        A = t_A, B = t_B, C = t_C, D = t_D;
    }
protected:
    std::string quad_name = "Ромб: ";
    unsigned int t_a = 25, t_b = 25, t_c = 25, t_d = 25;
    unsigned int t_A = 80, t_B = 100, t_C = 80, t_D = 200 /*Тут ошибка*/;

    std::string correct() override;
};