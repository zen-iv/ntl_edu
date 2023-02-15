#include <iostream>

class figure {
public:
    void return_figure() {
        std::cout << figure_name << corners_count << std::endl;
    }
protected:
    std::string figure_name = "Фигура: ";
    int corners_count = 0;
};
class triangle :public ::figure
{
public:
    triangle() : figure() {
        figure_name = "Триугольник: ";
        corners_count = 3;
    }
};
class square :public ::figure
{
public:
    square() : figure() {
        figure_name = "Квадрат: ";
        corners_count = 4;
    }
};

int main()
{
    std::cout << "Количество сторон: " << std::endl;
    figure Z;
    triangle X;
    square Y;

    Z.return_figure();
    X.return_figure();
    Y.return_figure();
}