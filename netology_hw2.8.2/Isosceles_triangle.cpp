#include "Isosceles_triangle.h"

std::string Isosceles_triangle::correct(){
	try
	{
		if ((t_A != t_C) && (t_a != t_c) && (t_A + t_B + t_C) != 180)
		{
			throw Uncorrect_Figure("������������ ��������� � �����: Isosceles_triangle.h\n"); // "������������\n";
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