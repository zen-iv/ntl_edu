#pragma once
#include <iostream>
#include <string>


class Greeter
{
public:
	Greeter(std::string user_input) {
		user_name = user_input;
	}
	void greet();
private:
	std::string user_name;
};

