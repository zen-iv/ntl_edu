// Напишите программу, которая все нечётные элементы массива (std::vector) умножает на 3 с помощью лямбда-функции.
// Циклы использовать не нужно.
/*  Входные данные:  4 7 9 14 12 
    Выходные данные: 4 21 27 14 12 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << "Before" << ": " << std::endl;
    for (int x : vec) {
        std::cout << x << " ";
    }
    std::for_each(vec.begin(), vec.end(), [](int& x) { //можно через for(auto & x : vec)...
        if (x % 2 == 1) {
            x *= 3;
        }
        });
    std::cout << "\n\nAfter" << ": " << std::endl;
    for (int x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}