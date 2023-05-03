/*
std::variant бывает удобно применять в разработке парсеров.

Например, есть некоторая универсальная функция, которая может возвращать значения разных типов в зависимости от контекста.В этом задании вам нужно использовать простую функцию, которая может возвращать число, строку или массив чисел.
Вам нужно написать обработку результата этой функции следующим образом :

Если в результате функции содержится int, то вывести число, умноженное на 2.
Если в результате функции содержится строка, то просто вывести её в консоль.
Если в результате функции содержится вектор чисел, то вывести все его элементы в консоль.

Поменять стандарт C++
*/
#include <iostream>
#include <variant>
#include <vector>
#include <string>

std::variant<int, std::string, std::vector<int>> get_variant() {
	std::srand(std::time(nullptr));
	int random_variable = std::rand() % 3;

	std::variant<int, std::string, std::vector<int>> result;
	switch (random_variable)
	{
	case 0:
		result = 5;
		break;
	case 1:
		result = "string";
		break;
	case 2:
		result = std::vector<int>{ 1, 2, 3, 4, 5 };
		break;
	default:
		break;
	}
	return result;
}

int main() {
	auto result = get_variant();
	if (auto ptr = std::get_if<int>(&result)) { // get_if - получить указатель на объект определенного типа, и проверяем, что указатель не равен nullptr.
		std::cout << *ptr * 2 << std::endl;
	}
	else if (auto ptr = std::get_if<std::string>(&result)) {
		std::cout << *ptr << std::endl;
	}
	else if (auto ptr = std::get_if<std::vector<int>>(&result)) {
		for (int x : *ptr) {
			std::cout << x << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}