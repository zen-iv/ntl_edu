#pragma once
#include "Figure.h"
class Quadrilateral :public ::Figure
{
public:
    Quadrilateral() {
        figure_name = "Четырехугольник: ";
        corners_count = 4;
        a = 12; b = 16; c = 18, d = 14; A = 85; B = 45; C = 100, D = 130;
    }
    void return_figure() override;
protected:
    unsigned int a, b, c, d; //length
    unsigned int A, B, C, D; //angle

    std::string correct() override;
};

