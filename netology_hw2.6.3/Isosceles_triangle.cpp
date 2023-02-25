#include "Isosceles_triangle.h"

std::string Isosceles_triangle::correct(){
    if ((t_A == t_C) && (t_a == t_c) && (t_A + t_B + t_C) == 180)
    {
        return "Правильная";
    }
    else {
        return "Неправильная";
    }
}