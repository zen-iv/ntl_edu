#include "Right_triangle.h"

std::string Right_triangle::correct() {
    if (t_C == 90 && (t_A + t_B + t_C) == 180)
    {
        return "Правильная";
    }
    else {
        return "Неправильная";
    }
}