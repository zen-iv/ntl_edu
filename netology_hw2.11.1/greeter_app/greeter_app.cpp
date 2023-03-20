#include <iostream>
#include <string>
#include "Greeter.h"

int main() {
	setlocale(LC_ALL, "RU");

	std::string user_name;

	std::cout << "Введите имя: ";
	std::cin >> user_name;

	Greeter user_to_greet(user_name);
	user_to_greet.greet();

	return 0;
}