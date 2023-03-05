#include <iostream>
using namespace std;

#define MODE 1

#ifndef MODE
#error Необходимо определить MODE!
#endif

#if MODE == 1
int add(int x, int y) {
    return x + y;
}
#endif // MODE == 1

int main() {
setlocale(LC_ALL, "RU");

#if MODE == 0
    cout << "Работаю в режиме тренировки!" << endl;
#elif MODE == 1
    cout << "Введите первое и второе целое число для сложения(через пробел): " << endl;
    int num1, num2;
    cin >> num1 >> num2;
    cout << "Результат: " << add(num1, num2) << endl;
#else 
    cout << "Неизвестный режим. Завершение работы!" << endl;
#endif
    return 0;
}
