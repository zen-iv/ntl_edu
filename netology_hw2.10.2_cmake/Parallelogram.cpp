#include "Parallelogram.h"

void Parallelogram::correct() {
		if ((corners_count != 4) || ((A + B + C + D) != 360) || ((a != c) || (b != d)) || ((A != C) || (B != D)))
		{
			throw Uncorrect_Figure("������������ ��������� � �����: Parallelogram.h\n"); // "������������\n";
		}
}
