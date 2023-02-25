#include "Square.h"
std::string Square::correct() {
    if ((corners_count == 4) && (t_A + t_B + t_C + t_D == 360) && ((t_A == 90) && (t_B == 90) && (t_C == 90) && (t_D == 90)) && ((t_a == t_b) && (t_a == t_c) && (t_a == t_d)))
    {
        return "Правильная";
    }
    else {
        return "Неправильная";
    }
}