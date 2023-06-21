//Задача 2. Удаление дубликатов
//Описание
//Вам поступают числа из стандартного потока ввода.Первым числом вводится количество элементов, далее сами значения.
//
//Нужно вывести все эти числа без дубликатов в порядке убывания.
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

class SortNumbers {
public:
    void showSortedNumbers() {
        int count;
        std::cout << "[IN]:\n";
        std::cin >> count;

        std::set<int, std::greater<int>> numbersSet;
        int num;
        for (int i = 0; i < count; ++i) {
            std::cin >> num;
            numbersSet.insert(num);
        }

        std::cout << "[OUT]:\n";
        for (int number : numbersSet) {
            std::cout << number << std::endl;
        }
    }
};

int main() {
    SortNumbers sortNumbers;
    sortNumbers.showSortedNumbers();

    return 0;
}