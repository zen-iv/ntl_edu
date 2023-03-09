#include <iostream>

#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrilateral.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "Square.h"

#include "Uncorrect_Figure.h"

void print_info(Figure* f) { f->return_figure(); }

int main()
{
    setlocale(LC_ALL, "RU");
    Figure Z;
    Triangle X;
    Right_triangle F;
    Isosceles_triangle G;
    Equilateral_triangle J;
    Quadrilateral Y;
    Parallelogram U;
    Rectangle I;
    Rhombus R;
    Square Q;

    print_info(&Z);
    print_info(&X);
    print_info(&F);
    print_info(&G);
    print_info(&J);
    print_info(&Y);
    print_info(&U);
    print_info(&I);
    print_info(&R); /*Ошибка в файле "Rhombus.h"*/
    print_info(&Q);
}