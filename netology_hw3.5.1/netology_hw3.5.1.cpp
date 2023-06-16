//Задача 1. Возведение в квадрат
//Описание
//Нужно реализовать шаблонную функцию возведения в квадрат, которая работает не только с простыми числами, но и с векторами.Для этого создайте две реализации шаблонной функции.
//
//Пример правильной работы программы
//[IN]: 4
//[OUT] : 16
//[IN] : -1, 4, 8
//[OUT] : 1, 16, 64
#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
T square(const T& in)
{
	return in * in;
}

template<typename T>
std::vector<T> square(const std::vector<T>& in)
{
	std::vector<T> out(in.size());
	int i = 0;
	for (const auto& var : in)
	{
		out[i++] = var * var;
	}

	return out;
}

template<typename T>
void printVector(const std::vector<T> &in)
{
	for (const auto &var : in)
	{
		std::cout << var << "  ";
	}
}

int main()
{
	setlocale(LC_ALL, "RU");

	int x = 4;
	std::cout << "[IN]:\t" << x << '\n';
	int y = square(x);
	std::cout << "[OUT]:\t" << y << "\n\n";

	double a = 2.2;
	std::cout << "[IN]:\t" << a << '\n';
	double b = square(a);
	std::cout << "[OUT]:\t" << b << "\n\n";


	std::vector<int> vec_list = { 1, 2, 3, 4, 5, 6 };
	std::vector<int> sqrt_list = square(vec_list);

	std::cout << "[IN]:\t";
	printVector(vec_list);
	std::cout << "\n[OUT]:\t";
	printVector(sqrt_list);
	std::cout << "\n\n";

	std::vector<double> double_vec_list = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
	std::vector<double> double_sqrt_list = square(double_vec_list);

	std::cout << "[IN]:\t";
	printVector(double_vec_list);
	std::cout << "\n[OUT]:\t";
	printVector(double_sqrt_list);

}