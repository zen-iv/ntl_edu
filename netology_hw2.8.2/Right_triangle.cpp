#include "Right_triangle.h"

void Right_triangle::correct() {
		if ((A != 90 && B != 90 && C != 90) || (A + B + C) != 180)
		{
			throw Uncorrect_Figure("Неправильные параметры в файле: Right_triangle.h\n"); // "Неправильная\n";
		}
}