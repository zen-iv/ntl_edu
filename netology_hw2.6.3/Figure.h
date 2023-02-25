#pragma once
#include <string>
#include <iostream>
class Figure
{
public:
    virtual void return_figure();
protected:
    std::string figure_name = "Фигура: ";
    int corners_count = 0;

    virtual std::string correct();
};

