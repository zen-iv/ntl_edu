#include "Isosceles_triangle.h"

void Isosceles_triangle::correct(){
		if ((corners_count != 3) || (((A != C) && (a != c)) && ((A != B) && (a != b)) && ((C != B) && (c != b))) || (A + B + C) != 180)
		{
			throw Uncorrect_Figure("������������ ��������� � �����: Isosceles_triangle.h\n"); // "������������\n";
		}
}