#pragma once
#include <string>
#include <iostream>
#include "Uncorrect_Figure.h"
class Figure
{
public:
    virtual void return_figure();
protected:
    std::string figure_name = "������: ";
    int corners_count = 0;
    
    virtual std::string correct();
};

