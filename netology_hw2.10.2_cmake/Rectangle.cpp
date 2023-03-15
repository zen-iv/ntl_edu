#include "Rectangle.h"

void Rectangle::correct()  {
		if ((corners_count != 4) || ((A + B + C + D) != 360) || ((a != c) || (b != d)) || ((A != 90) || (B != 90) || (C != 90) || (D != 90)))
		{
			throw Uncorrect_Figure("Неправильные параметры в файле: Rectangle.h\n"); // "Неправильная\n";
		}
	}