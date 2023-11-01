/*
Напишите программу для расчёта суммы двух векторов.+

Распараллельте эту программу на 2, 4, 8 и 16 потоков.+

Определите, какое количество потоков даёт самый быстрый результат.+

Сравните результаты выполнения для массивов из 1 000, 10 000, 100 000 и 1 000 000 элементов.+

Время выполнения для каждого варианта сведите в таблицу и выведите её в консоль.+

Первый запущенный поток должен вывести на экран доступное количество аппаратных ядер.+
*/
#include <iostream>
#include <thread>
#include <vector>
#include <chrono>
#include <Windows.h>
#include <iomanip>

float sum = 0;

void sumOfTwoVectors(std::vector<int> vec1, std::vector<int> vec2) {
	for (int i = 0; i < vec1.size(); ++i) {
		sum += vec1.at(i) + vec2.at(i);
	}
}
int main() {
	int CPU = std::thread::hardware_concurrency();
	std::cout << "Доступное количество аппаратных ядер: " << std::thread::hardware_concurrency() << std::endl;

	std::vector<int> vector1;
	std::vector<int> vector2;

	std::vector<int> vectorsSizes{ 1000, 10000, 100000, 1000000 };

	std::vector<int> countCPU{ 1, 2, 4, 8, 16 };
	std::vector<int> countsCPU;

	std::string needSpace(12, ' ');
	std::cout << std::string(16, ' ');

	for (const auto& el : vectorsSizes) {
		if (el == vectorsSizes.at(0)) {
			std::cout << el << needSpace;
		}
		else if (el == vectorsSizes.at(1)) {
			std::cout << el << std::string(11, ' ');
		}
		else {
			std::cout << el << std::string(10, ' ');
		}

	}

	std::cout << std::endl;

	for (const auto& count : countCPU) {
		std::cout << count << " threads\t";
		for (const auto& vectorSize : vectorsSizes) {
			vector1.resize(vectorSize, 1);
			vector2.resize(vectorSize, 2);
			std::vector<std::thread> vectorThreads;
			int vectorsSize = vectorSize / count;
			auto start = std::chrono::steady_clock::now(); 
			for (int i = 0; i < count; i++) {
				std::vector<int> newVector1;
				std::vector<int> newVector2;
				int rightBorder = (i != count - 1) ? vectorsSize * (i + 1) : vectorSize;
				for (int j = vectorsSize * i; j < rightBorder; ++j) {
					newVector1.push_back(vector1.at(j));
					newVector2.push_back(vector2.at(j));
				}
				vectorThreads.push_back(std::thread(sumOfTwoVectors, newVector1, newVector2));
			}
			for (auto& v : vectorThreads) {
				v.join();
			}
			auto stop = std::chrono::steady_clock::now();
			auto duration = std::chrono::duration_cast<std::chrono::microseconds> (stop - start); 
			std::cout << static_cast<double>(duration.count()) / 1e6 << "s\t";
			sum = 0;
		}
		std::cout << std::endl;
	}
	return 0;
}