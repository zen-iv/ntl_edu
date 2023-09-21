#include<iostream>
#include <vector>

template<class T>
void move_vectors(T& one, T& two) {
	two = std::move(one);
	for (const auto& el : two) {
		std::cout << el << " ";
	}
	std::cout << std::endl;
}

void size_is(std::vector <std::string> & left, std::vector <std::string> & right) {
	std::cout << "Vector one size: " << left.size() << std::endl;
	std::cout << "Vector two size: " << right.size() << std::endl;
}

int main() {
	std::vector <std::string> one = { "test_string1", "test_string2" };
	std::vector <std::string> two;

	size_is(one, two);

	move_vectors(one, two);

	size_is(one, two);
}