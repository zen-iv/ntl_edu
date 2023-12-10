/*Задача 3. Счётчик чисел
Описание
В этом задании вам нужно реализовать функтор, который подсчитывает сумму и количество чисел, делящихся на 3.

Должны быть реализованы 2 функции:

get_sum()
get_count()
Пример правильной работы программы
[IN] : 4 1 3 6 25 54
[OUT] : get_sum() = 63
[OUT] : get_count() = 3
*/
#include <iostream>
#include <vector>
#include <algorithm>

class get_sum
{
public:
	void operator()(int value)
	{
		if (value % 3 == 0)
		{
			sum += value;
		}
	};
	int getSum()
	{
		return sum;
	};
private:
	int sum = 0;
};

class get_count
{
public:
	void operator()(int value)
	{
		if (value % 3 == 0)
		{
			count++;
		}
	};
	int getCount()
	{
		return count;
	};
private:
	int count = 0;
};


int main()
{
	setlocale(LC_ALL, "RU");
	std::vector<int> vec{ 4,1,3,6,25,54 };

	std::cout << "[IN] : \t";
	for (const auto& var : vec)
	{
		std::cout << var << " ";
	}
	std::cout << std::endl;

	get_sum gs = std::for_each(vec.begin(), vec.end(), get_sum());
	std::cout << "[OUT]:\tget_sum() = " << gs.getSum() << "\n";

	get_count gc = std::for_each(vec.begin(), vec.end(), get_count());
	std::cout << "[OUT]:\tget_count() = " << gc.getCount() << "\n";

}
