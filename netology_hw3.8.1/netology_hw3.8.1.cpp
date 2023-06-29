#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	setlocale(LC_ALL, "RU");
	std::vector<int> vec = { 1,1,2,5,6,1,2,4 };

	std::cout << "[IN]:\t";
	for (const auto& var : vec)
	{
		std::cout << var << " ";
	}

	std::sort(vec.begin(), vec.end());//сортируем исх вектор для unique
	std::vector<int>::iterator it = std::unique(vec.begin(), vec.end());
	vec.erase(it, vec.end());

	std::cout << "\n[OUT]:\t";
	for (const auto& var : vec)
	{
		std::cout << var << " ";
	}
}