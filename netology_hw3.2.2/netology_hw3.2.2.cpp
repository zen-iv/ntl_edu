﻿#include <iostream>

using namespace std;

// объявление функции, которая будет складывать два числа
int adds(int x, int y) {
    return x + y;
}

int sub(int x, int y); // ошибка линковки(файл sub.h/sub.cpp не пререплен)

int main() {
    int a = 10;
    int b = 20;

    // вызов функции add и вывод результата
    cout << "Сумма " << a << " и " << b << " равна " << add(a, b) << endl; // Семантическая ошибка(неверное имя функции в вызове)

    // вызов функции add и вывод результата
    cout << "Разность " << a << " и " << b << " равна " << sub(a, b) << endl // Синтаксическая ошибка(отсутствует точка с запятой в конце объявления переменной)

    return 0;
}
