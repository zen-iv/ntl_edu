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
    for (;;)
    {   
        std::cout << "--------------------------------------------------------------------------------------" << std::endl;
        std::cout << "Выбрать тип создаваемой фигуры: \n1. Figure\n2. Trianlge\n3. Right_triangle\n4. Isosceles_triangle\n5. Equilateral_triangle\n6. Quadrilateral\n7. Parallelogram\n8. Rectangle\n9. Rhombus\n10. Square\n\n0. Для выхода" << std::endl;

        int t_input = 0;
        std::cin >> t_input;
        switch (t_input)
        {
        case 1: {
            std::cout << "Ввеедите кол-во углов: ";
            int user_corners_count = 0;
            std::cin >> user_corners_count;
            try
            {
                Figure Z(user_corners_count);
                print_info(&Z);
            }
            catch (const Uncorrect_Figure& err)
            {
                std::cout << err.what() << std::endl;
            }
            break;
        }
        case 2: {
            std::cout << "Ввеедите кол-во углов, стороны (a, b, c ) и углы (A, B, C)\n пример - 3 10 10 15 45 45 90 : ";
            int corners, u_a, u_b, u_c, u_A, u_B, u_C;
            std::cin >> corners >> u_a >> u_b >> u_c >> u_A >> u_B >> u_C;
            try
            {
                Triangle X(corners, u_a, u_b, u_c, u_A, u_B, u_C);
                print_info(&X); 
            }
              catch (const Uncorrect_Figure& err)
              {
                  std::cout << err.what() << std::endl;
              }
            break;
        }
        case 3: {
            std::cout << "Ввеедите кол-во углов, стороны (a, b, c ) и углы (A, B, C)\n пример - 3 10 10 15 45 45 90 : ";
            int corners, u_a, u_b, u_c, u_A, u_B, u_C;
            std::cin >> corners >> u_a >> u_b >> u_c >> u_A >> u_B >> u_C;
            try{
            Right_triangle F(corners, u_a, u_b, u_c, u_A, u_B, u_C);
            print_info(&F); }
              catch (const Uncorrect_Figure& err)
              {
                  std::cout << err.what() << std::endl;
              }
            break;
        }
        case 4: {
            std::cout << "Ввеедите кол-во углов, стороны (a, b, c ) и углы (A, B, C)\n пример - 3 10 10 15 45 45 90 : ";
            int corners, u_a, u_b, u_c, u_A, u_B, u_C;
            std::cin >> corners >> u_a >> u_b >> u_c >> u_A >> u_B >> u_C;
            try{
            Isosceles_triangle G(corners, u_a, u_b, u_c, u_A, u_B, u_C);
            print_info(&G); }
              catch (const Uncorrect_Figure& err)
              {
                  std::cout << err.what() << std::endl;
              }
            break;
        }
        case 5: {
            std::cout << "Ввеедите кол-во углов, стороны (a, b, c ) и углы (A, B, C)\n пример - 3 10 10 15 45 45 90 : ";
            int corners, u_a, u_b, u_c, u_A, u_B, u_C;
            std::cin >> corners >> u_a >> u_b >> u_c >> u_A >> u_B >> u_C;
            try{
            Equilateral_triangle J(corners, u_a, u_b, u_c, u_A, u_B, u_C);
            print_info(&J); }
              catch (const Uncorrect_Figure& err)
              {
                  std::cout << err.what() << std::endl;
              }
            break;
        }
        case 6: {
            std::cout << "Ввеедите кол-во углов, стороны (a, b, c, d) и углы (A, B, C, D)\n пример - 4 10 10 10 10 90 90 90 90 : ";
            int corners, u_a, u_b, u_c, u_d, u_A, u_B, u_C, u_D;
            std::cin >> corners >> u_a >> u_b >> u_c >> u_d >> u_A >> u_B >> u_C >> u_D;
            try{
            Quadrilateral Y(corners, u_a, u_b, u_c, u_d, u_A, u_B, u_C, u_D);
            print_info(&Y); }
              catch (const Uncorrect_Figure& err)
              {
                  std::cout << err.what() << std::endl;
              }
            break;
        }
        case 7: {
            std::cout << "Ввеедите кол-во углов, стороны (a, b, c, d) и углы (A, B, C, D)\n пример - 4 10 10 10 10 90 90 90 90 : ";
            int corners, u_a, u_b, u_c, u_d, u_A, u_B, u_C, u_D;
            std::cin >> corners >> u_a >> u_b >> u_c >> u_d >> u_A >> u_B >> u_C >> u_D;
            try{
            Parallelogram U(corners, u_a, u_b, u_c, u_d, u_A, u_B, u_C, u_D);
            print_info(&U);
            }
            catch (const Uncorrect_Figure& err)
            {
                std::cout << err.what() << std::endl;
            }
            break;
        }
        case 8: {
            std::cout << "Ввеедите кол-во углов, стороны (a, b, c, d) и углы (A, B, C, D)\n пример - 4 10 10 10 10 90 90 90 90 : ";
            int corners, u_a, u_b, u_c, u_d, u_A, u_B, u_C, u_D;
            std::cin >> corners >> u_a >> u_b >> u_c >> u_d >> u_A >> u_B >> u_C >> u_D;
            try{
            Rectangle I(corners, u_a, u_b, u_c, u_d, u_A, u_B, u_C, u_D);
            print_info(&I);
            }
            catch (const Uncorrect_Figure& err)
            {
                std::cout << err.what() << std::endl;
            }
            break;
        }
        case 9: {
            std::cout << "Ввеедите кол-во углов, стороны (a, b, c, d) и углы (A, B, C, D)\n пример - 4 10 10 10 10 90 90 90 90 : ";
            int corners, u_a, u_b, u_c, u_d, u_A, u_B, u_C, u_D;
            std::cin >> corners >> u_a >> u_b >> u_c >> u_d >> u_A >> u_B >> u_C >> u_D;
            try {
                Rhombus R(corners, u_a, u_b, u_c, u_d, u_A, u_B, u_C, u_D);
                print_info(&R); //err
            }
            catch (const Uncorrect_Figure& err)
            {
                std::cout << err.what() << std::endl;
            }
            break;
        }
        case 10: {
            std::cout << "Ввеедите кол-во углов, стороны (a, b, c, d) и углы (A, B, C, D)\n пример - 4 10 10 10 10 90 90 90 90 : ";
            int corners, u_a, u_b, u_c, u_d, u_A, u_B, u_C, u_D;
            std::cin >> corners >> u_a >> u_b >> u_c >> u_d >> u_A >> u_B >> u_C >> u_D;
            try{
            Square Q(corners, u_a, u_b, u_c, u_d, u_A, u_B, u_C, u_D);
            print_info(&Q); }
               catch (const Uncorrect_Figure& err)
               {
                   std::cout << err.what() << std::endl;
               }
            break;
        }
        case 0:
            std::cout << "Выход" << std::endl;
            break;
        default: {
            std::cout << "Вы ввели неверное значение." << std::endl;
            break;
        }
        }
        if (t_input == 0) {
            break;
        }
    }
    
}
