#include <iostream>
#include <stdexcept>

class smart_array {
public:
    explicit smart_array(int size) : size(size), data(new int[size]) {} //указываем количество элементов в массиве при вызове конструктора

    ~smart_array() { // диструктор, чистим память
        delete[] data;
    }

    void add_element(int element) { // добавляет новый элемент в массив и увеличиваем current_size
        if (current_size == size) {
            throw std::overflow_error("Массив переполнен"); //выбрасывается исключение, если массив полный
        }
        data[current_size] = element;
        current_size++;
    }

    int get_element(int index) const {
        if (index < 0 || index >= current_size) {
            throw std::out_of_range("Некорректный индекс"); //выбрасывается исключение, если индекс некорректный
        }
        return data[index];
    }

private:
    int size;
    int* data;
    int current_size = 0;
};

int main() {
    setlocale(LC_ALL, "RU");
    try {
        smart_array arr(5);
        arr.add_element(1);
        arr.add_element(4);
        arr.add_element(155);
        arr.add_element(14);
        arr.add_element(15);
        std::cout << arr.get_element(1) << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}