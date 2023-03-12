#include "Triangle.h"

void Triangle::correct() {
		if ((corners_count != 3) || (A + B + C != 180))
		{
			throw Uncorrect_Figure("������������ ��������� � �����: Triangle.h\n"); // "������������\n";
		}
}

void Triangle::return_figure()  {
    std::cout << figure_name << std::endl;
    std::cout << "���-�� �����: " << corners_count << std::endl;
    std::cout << "�������: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
    std::cout << "����: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;
    std::cout << std::endl;
}