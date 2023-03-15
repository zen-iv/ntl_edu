#pragma once
#include <string>
#include <iostream>
#include "Uncorrect_Figure.h"
class Figure
{
public:
    Figure() {};
    Figure(int c){
        corners_count = c;
        correct();
    }
    virtual void return_figure();
    
protected:
    std::string figure_name = "Фигура: ";
    int corners_count = 0;

    virtual void correct();
};

