#include "Right_triangle.h"

std::string Right_triangle::correct() {
	try
	{
		if (t_C != 90 && (t_A + t_B + t_C) != 180)
		{
			throw Uncorrect_Figure("������������ ��������� � �����: Right_triangle.h\n"); // "������������\n";
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