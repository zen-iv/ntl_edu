﻿#include <iostream>
//Используеются int, но в этом случае лучше double
class figure {
public:
    virtual void return_figure() {
        std::cout << figure_name << corners_count << std::endl;
    }
protected:
    std::string figure_name = "Фигура: ";
    int corners_count = 0;
};
class triangle :public ::figure
{
public:
    triangle() {
        figure_name = "Триугольник: ";
        corners_count = 3;
        a = 12; b = 16; c = 18; A = 45; B = 35; C = 100;
    }
    void return_figure() override{
        std::cout << figure_name << std::endl;
        std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
        std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;
        std::cout << std::endl;
    }

protected:
    std::string figure_name;
    unsigned int a, b, c; //length
    unsigned int A, B, C; //angle
};

class right_triangle : public::triangle { //прямоугольный треугольник (угол C всегда равен 90);
public:
    right_triangle() {
        figure_name = triangle_name;
        a = t_a, b = t_b, c = t_c;
        A = t_A, B = t_B, C = t_C;
    }
    /*void get_a(int getted_a) {
        t_a = getted_a;
    }
    void get_b(int getted_b) {
        t_b = getted_b;
    }
    void get_c(int getted_c) {
        t_c = getted_c;
    }
    void get_A(int getted_A) {
        t_A = getted_A;
    }
    void get_B(int getted_B) {
        t_B = getted_B;
    }*/
protected:
    std::string triangle_name = "Прямоугольный треугольник: ";
    unsigned int t_a = 4, t_b = 6, t_c = 3;
    unsigned int t_A = 45, t_B = 45, t_C = 90;
};
class isosceles_triangle : public::triangle { //равнобедренный треугольник (стороны a и c равны, углы A и C равны);
public:
    isosceles_triangle() {
        figure_name = triangle_name;
        a = t_a, b = t_b, c = t_c;
        A = t_A, B = t_B, C = t_C;
    }
    /*void get_a_c(int getted_a) {
        t_a = getted_a;
    }
    void get_b(int getted_b) {
        t_b = getted_b;
    }
    void get_A_C(int getted_A) {
        t_A = getted_A;
    }
    void get_B(int getted_B) {
        t_B = getted_B;
    }*/
protected:
    std::string triangle_name = "Равнобедренный треугольник: ";
    unsigned int t_a = 6, t_b = 3, t_c = 6;
    unsigned int t_A = 30, t_B = 120, t_C = 30;
};
class equilateral_triangle : public::triangle { //равносторонний треугольник(все стороны равны, все углы равны 60);
public:
    equilateral_triangle() {
        figure_name = triangle_name;
        a = t_a, b = t_b, c = t_c;
        A = t_A, B = t_B, C = t_C;
    }
    /*void get_a_b_c(int getted_a_b_c) {
        t_a = t_b = t_c = getted_a_b_c;
    }*/
protected:
    std::string triangle_name = "Равносторонний треугольник: ";
    unsigned int t_a = 5, t_b = 5, t_c = 5;
    unsigned int t_A = 60, t_B = 60, t_C = 60;
};

class quadrilateral :public ::figure{
public:
    quadrilateral() {
        figure_name = "Четырехугольник: ";
        corners_count = 4;
        a = 12; b = 16; c = 18, d = 14; A = 85; B = 45; C = 100, D = 130;
    }
    void return_figure() override {
        std::cout << figure_name << std::endl;
        std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << " " << "d = " << d << std::endl;
        std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << " " << "D = " << D << std::endl;
        std::cout << std::endl;
    }
protected:
    unsigned int a, b, c, d; //length
    unsigned int A, B, C, D; //angle
};

class parallelogram : public::quadrilateral { //параллелограмм(стороны a, c и b, d попарно равны, углы A, C и B, D попарно равны);
public:
    parallelogram() {
        figure_name = quad_name;
        a = t_a, b = t_b, c = t_c, d = t_d;
        A = t_A, B = t_B, C = t_C, D = t_D;
    }
    /*void get_a_c(int getted_a_c) {
        t_a = t_c = getted_a_c;
    }
    void get_b_d(int getted_b_d) {
        t_b = t_d = getted_b_d;
    }
    void get_A_C(int getted_A_C) {
        t_A = t_C = getted_A_C;
    }
    void get_B_D(int getted_B_D) {
        t_B = t_D = getted_B_D;
    }*/
protected:
    std::string quad_name = "Параллелограмм: ";
    unsigned int t_a = 25, t_b = 100, t_c = 25, t_d = 100;
    unsigned int t_A = 45, t_B = 135, t_C = 45, t_D = 135;
};
class rectangle : public::quadrilateral { //прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90)
public:
    rectangle() {
        figure_name = quad_name;
        a = t_a, b = t_b, c = t_c, d = t_d;
        A = t_A, B = t_B, C = t_C, D = t_D;
    }
    /*void get_a_c(int getted_a_c) {
        t_a = t_c = getted_a_c;
    }
    void get_b_d(int getted_b_d) {
        t_b = t_d = getted_b_d;
    }
    }*/
protected:
    std::string quad_name = "Прямоугольник: ";
    unsigned int t_a = 45, t_b = 24, t_c = 45, t_d = 24;
    unsigned int t_A = 90, t_B = 90, t_C = 90, t_D = 90;
};
class rhombus : public::quadrilateral { //ромб(все стороны равны, углы A, C и B, D попарно равны).
public:
    rhombus() {
        figure_name = quad_name;
        a = t_a, b = t_b, c = t_c, d = t_d;
        A = t_A, B = t_B, C = t_C, D = t_D;
    }
    /*void get_A_C(int getted_A_C) {
        t_A = t_C = getted_A_C;
    }
    void get_B_D(int getted_B_D) {
        t_B = t_D = getted_B_D;
    }
    }*/
protected:
    std::string quad_name = "Ромб: ";
    unsigned int t_a = 25, t_b = 25, t_c = 25, t_d = 25;
    unsigned int t_A = 80, t_B = 100, t_C = 80, t_D = 100;
};
class square : public::quadrilateral { //квадрат(все стороны равны, все углы равны 90);
public:
    square() {
        figure_name = quad_name;
        a = t_a, b = t_b, c = t_c, d = t_d;
        A = t_A, B = t_B, C = t_C, D = t_D;
    }
    /*void get_a_c(int getted_a_c) {
        t_a = t_c = getted_a_c;
    }*/
protected:
    std::string quad_name = "Квадрат: ";
    unsigned int t_a = 45, t_b = 45, t_c = 45, t_d = 45;
    unsigned int t_A = 90, t_B = 90, t_C = 90, t_D = 90;
};

void print_info(figure* f) { f->return_figure(); }

int main()
{
    figure Z;
    triangle X;
    right_triangle F;
    isosceles_triangle G;
    equilateral_triangle J;
    quadrilateral Y;
    parallelogram U;
    rectangle I;
    rhombus R;
    square Q;

    print_info(&X);
    print_info(&F);
    print_info(&G);
    print_info(&J);
    print_info(&Y);
    print_info(&U);
    print_info(&I);
    print_info(&R);
    print_info(&Q);
}