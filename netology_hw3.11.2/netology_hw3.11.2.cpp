#include <iostream>
#include <vector>
#include <string>

class big_integer {
private:
    std::vector<int> big_num;

public:
    big_integer(const std::string& num) { // Конструктор
        for (char c : num) {
            if (isdigit(c)) { // Проверяем, является ли символ цифрой
                big_num.push_back(c - '0'); // Если символ является цифрой, то он вычитает символ '0', чтобы получить целое значение этой цифры
            }
        }
        reverse(big_num.begin(), big_num.end()); // Переворачиваем вектор, получаем число
    }

    big_integer(std::string&& num) { // Конструктор перемещения
        for (char c : num) {
            if (isdigit(c)) {
                big_num.push_back(c - '0');
            }
        }
        reverse(big_num.begin(), big_num.end());
    }

    big_integer& operator=(std::string&& num) { // Перемещающий оператор присваивания
        big_num.clear();
        for (char c : num) {
            if (isdigit(c)) {
                big_num.push_back(c - '0');
            }
        }
        reverse(big_num.begin(), big_num.end());
        return *this;
    }
 
    big_integer operator+(const big_integer& other) const { // Оператор сложения двух больших чисел
        big_integer result("0");
        int x = 0;
        size_t i = 0;

        while (i < big_num.size() || i < other.big_num.size() || x > 0) {
            int sum = x;
            if (i < big_num.size()) {
                sum += big_num[i];
            }
            if (i < other.big_num.size()) {
                sum += other.big_num[i];
            }

            x = sum / 10;
            sum %= 10;

            result.big_num.push_back(sum);
            i++;
        }

        return result;
    }
    
    big_integer operator*(int multiplier) const { // Оператор умножения на число
        if (multiplier < 0 || multiplier > 9) {
            throw std::invalid_argument("Число должно быть от 0 до 9");
        }

        big_integer result("0");
        int x = 0; // Переменная для того чтобы работал перенос чисел

        for (size_t i = 0; i < big_num.size(); i++) {
            int prod = big_num[i] * multiplier + x;
            x = prod / 10;
            prod %= 10;

            result.big_num.push_back(prod);
        }

        while (x > 0) {
            result.big_num.push_back(x % 10);
            x /= 10;
        }

        return result;
    }

    friend std::ostream& operator<<(std::ostream& os, const big_integer& num) { // Перегрузка << для вывода
        for (auto it = num.big_num.rbegin(); it != num.big_num.rend(); ++it) {
            os << *it;
        }
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
