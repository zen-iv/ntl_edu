#include "Quadrilateral.h"

std::string Quadrilateral::correct() {
try
	{
		if ((corners_count != 4) && (A + B + C + D != 360))
		{
			throw Uncorrect_Figure("������������ ��������� � �����: Quadrilateral.h\n"); // "������������\n";
		}
		else
		{
			return "����������\n";
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
    std::cout << "���-�� �����: " << corners_count << std::endl;
    std::cout << "�������: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << " " << "d = " << d << std::endl;
    std::cout << "����: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << " " << "D = " << D << std::endl;
    std::cout << std::endl;
}
