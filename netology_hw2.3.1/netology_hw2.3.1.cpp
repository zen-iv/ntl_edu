#include <iostream>

class Calculator {
public:
    double add() {//double num1, double num2
        result = num1 + num2;
        return result;
    }
    double multiply() {//double num1, double num2
        result = num1 * num2;
        return result;
    }
    double subtract_1_2() {//double num1, double num2
        result = num1 - num2;
        return result;
    }
    double subtract_2_1() {//double num2, double num1
        result = num2 - num1;
        return result;
    }
    double divide_1_2() {//double num1, double num2
        result = num1 / num2;
        return result;
    }
    double divide_2_1() {//double num2, double num1
        result = num2 / num1;
        return result;
    }
    bool set_num1(double &in_num1) {
        if (in_num1 != 0) {
            num1 = in_num1;
            return true;
        }
        else
        {
            return false;
        }
    }
    bool set_num2(double& in_num2) {
        if (in_num2 != 0) {
            num2 = in_num2;
            return true;
        }
        else
        {
            return false;
        }
    }
private:
    double num1, num2, result;
};

int main()
{
    Calculator calc;
    double x, y;
    for (;;)
    {
        std::cout << "Введите num1: ";
        std::cin >> x;
        if (calc.set_num1(x)) {
            break;
        }
        else
        {
            std::cout << "Неверный ввод!\n";
            continue;
        }
    }
    for (;;)
    {
        std::cout << "Введите num2: ";
        std::cin >> y;
        if (calc.set_num2(y)) {
            break;
        }
        else
        {
            std::cout << "Неверный ввод!\n";
            continue;
        }
    }
    
    std::cout << "num1 + num2 = " << calc.add() << " \n";
    std::cout << "num1 - num2 = " << calc.subtract_1_2() << " \n";
    std::cout << "num2 - num1 = " << calc.subtract_2_1() << " \n";
    std::cout << "num1 * num2 = " << calc.multiply() << " \n";
    std::cout << "num1 / num2 = " << calc.divide_1_2() << " \n";
    std::cout << "num2 / num1 = " << calc.divide_2_1() << " \n";
}
