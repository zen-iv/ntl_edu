#include "Square.h"
std::string Square::correct() {
	try
	{
		if ((corners_count != 4) && (t_A + t_B + t_C + t_D != 360) && ((t_A != 90) && (t_B != 90) && (t_C != 90) && (t_D != 90)) && ((t_a != t_b) && (t_a != t_c) && (t_a != t_d)))
		{
			throw Uncorrect_Figure("Неправильные параметры в файле: Square.h\n"); // "Неправильная\n";
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