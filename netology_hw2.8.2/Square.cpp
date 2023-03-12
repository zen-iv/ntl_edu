#include "Square.h"
void Square::correct() {
		if ((corners_count != 4) || (A + B + C + D != 360) || ((A != 90) || (B != 90) || (C != 90) || (D != 90)) || ((a != b) || (a != c) || (a != d)))
		{
			throw Uncorrect_Figure("Неправильные параметры в файле: Square.h\n"); // "Неправильная\n";
		}
}