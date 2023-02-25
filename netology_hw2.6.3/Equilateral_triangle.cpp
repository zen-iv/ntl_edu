#include "Equilateral_triangle.h"

std::string Equilateral_triangle::correct() {
    if ((t_A == 60) && (t_B == 60) && (t_C == 60) && (t_a == t_b) && (t_a == t_c))
    {
        return "Правильная";
    }
    else {
        return "Неправильная";
    }
}