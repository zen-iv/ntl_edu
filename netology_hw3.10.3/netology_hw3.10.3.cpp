//Задача 3 * .std::unique_ptr своими руками
//Описание
//Нужно создать упрощённый аналог std::unique_ptr.
//
//В шаблонном классе должны быть реализованы функции :
//
//Конструктор, принимающий сырой указатель.
//Перегружен оператор* для получения объекта.
//Запрещены оператор присваивания и конструктор копирования.
//Метод release, который освобождает владение и возвращает сырой указатель.
//Деструктор.

#include <iostream>

template<class T>
class smart_pointer {
public:
	smart_pointer(T* ptr_) : ptr(ptr_) { }
	T& operator*() { return *ptr; }

	smart_pointer& operator=(const smart_pointer&) = delete;
	~smart_pointer() {
		std::cout << "destructor\n";
		delete[] ptr;
		ptr = nullptr;
	}
	T* release() {
		T* temp_buf = ptr;
		*temp_buf = *ptr;
		ptr = nullptr;
		return temp_buf;
	}
private:
	T* ptr;
};

int main() {
	smart_pointer<int> ptr(new int(123));
	std::cout << *ptr << "\n";
	auto* ptr_1 = ptr.release();
	delete ptr_1;
}