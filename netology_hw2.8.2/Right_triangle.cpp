#include "Right_triangle.h"

std::string Right_triangle::correct() {
	try
	{
		if (t_C != 90 && (t_A + t_B + t_C) != 180)
		{
			throw Uncorrect_Figure("Неправильные параметры в файле: Right_triangle.h\n"); // "Неправильная\n";
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