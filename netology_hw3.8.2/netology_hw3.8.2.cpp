﻿#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <list>

template<typename T> //Контейнер может быть любым:
void print_container(const T& container)
{
	for (const auto& var : container)
	{
		std::cout << var << " ";
	}
	std::cout << std::endl;
};

int main()
{
	setlocale(LC_ALL, "RU");

	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container(test_set);

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container(test_list);

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container(test_vector);
}