#include "Equilateral_triangle.h"

std::string Equilateral_triangle::correct() {
try
	{
		if ((t_A != 60) && (t_B != 60) && (t_C != 60) && (t_a != t_b) && (t_a != t_c))
		{
			throw Uncorrect_Figure("Неправильные параметры в файле: Equilateral_triangle.h\n"); // "Неправильная\n";
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
}