#include "Rhombus.h"
void Rhombus::correct() {
		if ((corners_count == 4) || ((A + B + C + D) == 360) || ((A == C) || (B == D)) || ((a == b) || (a == c) || (a == d)))
		{
			throw Uncorrect_Figure("Неправильные параметры в файле: Rhombus.h\n");
		}
}