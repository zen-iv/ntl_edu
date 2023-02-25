#pragma once
#include "Figure.h"
class Triangle :public ::Figure
{
public:
    Triangle() {
        figure_name = "Триугольник: ";
        corners_count = 3;
        a = 12; b = 16; c = 18; A = 45; B = 35; C = 100;
    }
    void return_figure() override;

protected:
    std::string figure_name;
    unsigned int a, b, c; //length
    unsigned int A, B, C; //angle

    std::string correct() override;
};

