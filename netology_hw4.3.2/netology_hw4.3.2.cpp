#include <iostream>
#include <vector>
#include <future>
#include <algorithm>
#include <iterator>

template<typename Iterator, typename Func>
void parallel_for_each(Iterator begin, Iterator end, Func f) {
    auto length = std::distance(begin, end);

    // Базовый случай рекурсии
    if (length < 1000) { // Пороговое значение, можно изменить
        std::for_each(begin, end, f);
    }
    else {
        // Разделение контейнера на две части
        Iterator middle = std::next(begin, length / 2);

        // Асинхронный запуск для первой половины
        std::future<void> first_half = std::async(parallel_for_each<Iterator, Func>, begin, middle, f);

        // Рекурсивный запуск для второй половины
        parallel_for_each(middle, end, f);

        // Ожидание завершения первой половины
        first_half.get();
    }
}

int main() {
    std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    parallel_for_each(v.begin(), v.end(), [](int& x) {
        x *= 2; //удвоение каждого элемента
        });

    for (int x : v) {
        std::cout << x << " ";
    }

    return 0;
}
