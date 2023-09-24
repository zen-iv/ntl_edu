#include <iostream>
#include <string>

class big_integer {
private:
    std::string big_num;

public:
    big_integer(const std::string& num) : big_num(num) {} // Конструктор

    big_integer(std::string&& num) : big_num(std::move(num)) {} // Конструктор перемещения

    big_integer& operator=(std::string&& num) { // Перемещающий оператор присваивания
        big_num = std::move(num);
        return *this;
    }

    // Move-конструктор
    big_integer(big_integer&& other) noexcept : big_num(std::move(other.big_num)) {}

    // Оператор перемещающего присваивания
    big_integer& operator=(big_integer&& other) noexcept {
        if (this != &other) {
            big_num = std::move(other.big_num);
        }
        return *this;
    }

    big_integer operator+(const big_integer& other) const { // Оператор сложения двух больших чисел
        big_integer result("0");
        int x = 0;
        int i = big_num.length() - 1;
        int j = other.big_num.length() - 1;

        while (i >= 0 || j >= 0 || x > 0) {
            int sum = x;
            if (i >= 0) {
                sum += big_num[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += other.big_num[j] - '0';
                j--;
            }

            x = sum / 10;
            sum %= 10;

            result.big_num = static_cast<char>(sum + '0') + result.big_num;
        }

        return result;
    }

    big_integer operator*(int multiplier) const { // Оператор умножения на число
        if (multiplier < 0 || multiplier > 9) {
            throw std::invalid_argument("Число должно быть от 0 до 9");
        }

        big_integer result("0");
        int x = 0;

        for (int i = big_num.length() - 1; i >= 0; i--) {
            int prod = (big_num[i] - '0') * multiplier + x;
            x = prod / 10;
            prod %= 10;

            result.big_num = static_cast<char>(prod + '0') + result.big_num;
        }

        while (x > 0) {
            result.big_num = static_cast<char>(x % 10 + '0') + result.big_num;
            x /= 10;
        }

        return result;
    }

    friend std::ostream& operator<<(std::ostream& os, const big_integer& num) { // Перегрузка << для вывода
        os << num.big_num;
        return os;
    }
};

int main() {
    auto number1 = big_integer("114575");
    auto number2 = big_integer("78524");
    std::cout << "Number 1: " << number1 << std::endl;
    std::cout << "Number 2: " << number2 << std::endl;

    auto result1 = number1 + number2;
    std::cout << "Sum: " << result1 << std::endl; // 193099

    auto multiplied = number1 * 3;
    std::cout << multiplied << std::endl; // 343725

    auto number3 = big_integer("123456789012345678901234567890");
    auto number4 = big_integer("987654321098765432109876543210");

    // Вывод чисел
    std::cout << "Number 3: " << number3 << std::endl;
    std::cout << "Number 4: " << number4 << std::endl;

    // Сложение чисел
    big_integer result2 = number3 + number4;
    std::cout << "Sum: " << result2 << std::endl;

    // Перемещающий оператор присваивания
    number3 = std::string("12345");
    std::cout << "Number 3 после присваивания: " << number3 << std::endl;

    return 0;
}
