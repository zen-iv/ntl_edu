#include <iostream>

int function(std::string str, int forbidden_length) {
	if (str.length() == forbidden_length)
	{
		throw std::runtime_error("bad_length");
	}
	return str.length();
}

int main()
{
	setlocale(LC_ALL, "RU");
	int zepret;
	std::cout << "Введите запретную длину: ";
	std::cin >> zepret;
	for (;;)
	{
		std::string str_ex;
		std::cout << "Введите слово: ";
		std::cin >> str_ex;
		try
		{
			std::cout << "Длина слова " << str_ex << " равна: " << function(str_ex, zepret) << std::endl;
		}
		catch (const std::runtime_error& e)
		{
			std::cout << "Вы ввели слово запретной длины! До свидания. " /*<< e.what()*/ << std::endl;
			break;
		}
	}
}
