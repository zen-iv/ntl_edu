#include "Equilateral_triangle.h"

void Equilateral_triangle::correct() {
	if ((corners_count != 3) || (A != 60) || (B != 60) || (C != 60) || (a != b) || (a != c))
	{
		throw Uncorrect_Figure("Неправильные параметры в файле: Equilateral_triangle.h\n"); // "Неправильная\n";
	}
}