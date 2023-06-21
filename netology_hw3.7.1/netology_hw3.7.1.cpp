/*
Задача 1. Частота символов
Описание
Нужно посчитать, сколько раз каждый символ встречается в заданном тексте, и отсортировать по убыванию частоты.

[IN]: Hello world!!
[OUT]:
l: 3

*/

#include <iostream>
#include <string>
#include <map>
#include <cctype> 
#include <algorithm>

using namespace std;
class sort_string
{
public:
	void show_list(string* UserInput) {
		str = *UserInput;
		/*for (char& c : str) {
			c = tolower(c);
		}*/
		cout << "[IN]: " << str << endl;
		make_letter_count_list();

		cout << "[OUT]:\n";

		make_sorted_list();
		for (const auto& el : sorted_list)//вывод на экран
		{
			cout << el.second << ": " << el.first << endl;
		}
	}

private:
	string str;

	map<int, char> unsorted_list;
	multimap<int, char, greater<int>> sorted_list;

	void make_letter_count_list() { //запись букв и колличества
		int i = 0;
		char letter;
		int quantity;
		while (letter = str[i])
		{
			quantity = count(str.begin(), str.end(), letter);
			unsorted_list.emplace(make_pair(letter, quantity));
			++i;
		}
	}

	void make_sorted_list() {//multimap с key = quantity для сортировки по убыванию кол-ва
		for (const auto& [letter, quantity] : unsorted_list)
		{
			sorted_list.emplace(make_pair(quantity, letter));
		}
	}
};

int main()

{
	setlocale(LC_ALL, "Russian");
	string inputText;
	cout << "Введите текст: ";
	getline(cin, inputText);
	sort_string Ex;
	Ex.show_list(&inputText);
}