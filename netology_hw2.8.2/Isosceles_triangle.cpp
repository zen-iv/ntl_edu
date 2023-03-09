#include "Isosceles_triangle.h"

std::string Isosceles_triangle::correct(){
	try
	{
		if ((t_A != t_C) && (t_a != t_c) && (t_A + t_B + t_C) != 180)
		{
			throw Uncorrect_Figure("Неправильные параметры в файле: Isosceles_triangle.h\n"); // "Неправильная\n";
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