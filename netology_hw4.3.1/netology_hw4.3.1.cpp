#include <iostream>
#include <vector>
#include <thread>
#include <future>
#include <algorithm>

// Функция для асинхронного поиска минимального элемента
int findMinAsync(const std::vector<int>& arr, int start, std::promise<int>&& prom) {
    int minIndex = start;
    for (int i = start + 1; i < arr.size(); ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    prom.set_value(minIndex);
    return minIndex;
}

// Алгоритм сортировки выбором
void selectionSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        std::promise<int> prom;
        std::future<int> fut = prom.get_future();

        std::thread t(findMinAsync, std::cref(arr), i, std::move(prom));

        int minIndex = fut.get();

        // Обмен элементов
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
        t.join();
    }
}

int main() {
    std::vector<int> arr = { 64, 25, 12, 22, 11 };
    selectionSort(arr);

    for (int i : arr) {
        std::cout << i << " ";
    }

    return 0;
}