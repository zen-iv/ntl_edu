#include <iostream>
#include <stdexcept>

class smart_array {
public:
    explicit smart_array(int size) : size(size), data(new int[size]) {} //указываем количество элементов в массиве при вызове конструктора

    smart_array(const smart_array& other) : size(other.size), data(new int[other.size]), current_size(other.current_size) { // конструктор для копирования
        for (int i = 0; i < current_size; i++) {
            data[i] = other.data[i];
        }
    }
    ~smart_array() {
        delete[] data;
    }

    smart_array& operator=(const smart_array& other) { // оператор присваивания
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new int[size];
            current_size = other.current_size;
            for (int i = 0; i < current_size; i++) {
                data[i] = other.data[i];
            }
        }
        return *this;
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

        std::cout << arr.get_element(0) << std::endl;
        std::cout << arr.get_element(1) << std::endl;
        std::cout << arr.get_element(2) << std::endl;
        std::cout << "------------------" << std::endl;

        smart_array new_array(2);
        new_array.add_element(44);
        new_array.add_element(34);

        arr = new_array;
        
        std::cout << arr.get_element(0) << std::endl;
        std::cout << arr.get_element(1) << std::endl;
        // std::cout << arr.get_element(2) << std::endl; выдаст ошибку - Некорректный индекс, тк выйдет за пределы массива
        std::cout << "------------------" << std::endl;

        std::cout << new_array.get_element(0) << std::endl;
        std::cout << new_array.get_element(1) << std::endl;
        std::cout << "------------------" << std::endl;
        
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}