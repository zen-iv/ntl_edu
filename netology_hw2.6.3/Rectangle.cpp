#include "Rectangle.h"

std::string Rectangle::correct()  {
    if ((corners_count == 4) && ((t_A + t_B + t_C + t_D) == 360) && ((t_a == t_c) && (t_b == t_d)) && ((t_A == 90) && (t_B == 90) && (t_C == 90) && (t_D == 90)))
    {
        return "Правильная";
    }
    else {
        return "Неправильная";
    }
}