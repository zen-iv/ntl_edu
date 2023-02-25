#include "Rhombus.h"
std::string Rhombus::correct() {
    if ((corners_count == 4) && ((t_A + t_B + t_C + t_D) == 360) && ((t_A == t_C) && (t_B == t_D)) && ((t_a == t_b) && (t_a == t_c) && (t_a == t_d)))
    {
        return "Правильная";
    }
    else {
        return "Неправильная";
    }
}