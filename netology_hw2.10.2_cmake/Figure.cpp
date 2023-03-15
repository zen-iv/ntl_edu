#include "Figure.h"
#include "Uncorrect_Figure.h"
#include <string>
#include <iostream>

void Figure::return_figure() {
	
    std::cout << figure_name << corners_count <<" углов" << std::endl;
}

void Figure::correct() {
	
	if (corners_count != 0)
	{
		throw Uncorrect_Figure("Неправильные параметры в файле: Figure.h\n"); // "Неправильная\n";
	}
}