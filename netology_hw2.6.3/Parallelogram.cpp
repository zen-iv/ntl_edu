#include "Parallelogram.h"

std::string Parallelogram::correct() {
    if ((corners_count == 4) && ((t_A + t_B + t_C + t_D) == 360) && ((t_a == t_c) && (t_b == t_d)) && ((t_A == t_C) && (t_B == t_D)))
    {
        return "Правильная";
    }
    else {
        return "Неправильная";
    }
}
