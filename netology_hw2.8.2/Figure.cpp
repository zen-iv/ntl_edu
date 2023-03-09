#include "Figure.h"
#include "Uncorrect_Figure.h"
#include <string>
#include <iostream>

void Figure::return_figure() {
	
    std::cout << correct() << figure_name << corners_count << std::endl;
}

std::string Figure::correct() {
	try
	{
		if (corners_count != 0)
		{
			throw Uncorrect_Figure("Неправильные параметры в файле: Figure.h\n"); // "Неправильная\n";
		}
		else
		{
			return "Правильная\n";
		}
	}
	catch (const Uncorrect_Figure& err)
	{
		std::cout << err.what() << std::endl;
		//throw;
	}
};

