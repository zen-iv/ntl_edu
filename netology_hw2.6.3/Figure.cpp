#include "Figure.h"
#include <string>
#include <iostream>

void Figure::return_figure() {
    std::cout << correct() << figure_name << corners_count << std::endl;
}

std::string Figure::correct() {
    if (corners_count == 0)
    {
        return "Правильная\n";
    }
    else {
        return "Неправильная\n";
    }
};