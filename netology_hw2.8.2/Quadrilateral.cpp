#include "Quadrilateral.h"

void Quadrilateral::correct() {
		if ((corners_count != 4) || (A + B + C + D != 360))
		{
			throw Uncorrect_Figure("������������ ��������� � �����: Quadrilateral.h\n"); // "������������\n";
		}
}
void Quadrilateral::return_figure() {
    std::cout << figure_name << std::endl;
    std::cout << "���-�� �����: " << corners_count << std::endl;
    std::cout << "�������: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << " " << "d = " << d << std::endl;
    std::cout << "����: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << " " << "D = " << D << std::endl;
    std::cout << std::endl;
}
