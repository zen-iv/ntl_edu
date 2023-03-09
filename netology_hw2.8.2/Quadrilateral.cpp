#include "Quadrilateral.h"

std::string Quadrilateral::correct() {
try
	{
		if ((corners_count != 4) && (A + B + C + D != 360))
		{
			throw Uncorrect_Figure("Неправильные параметры в файле: Quadrilateral.h\n"); // "Неправильная\n";
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
void Quadrilateral::return_figure() {
    std::cout << figure_name << std::endl;
    std::cout << correct() << std::endl;
    std::cout << "Кол-во углов: " << corners_count << std::endl;
    std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << " " << "d = " << d << std::endl;
    std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << " " << "D = " << D << std::endl;
    std::cout << std::endl;
}
