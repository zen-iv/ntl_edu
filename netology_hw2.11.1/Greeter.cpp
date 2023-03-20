#include "Greeter.h"
#include <iostream>
#include <string>

void Greeter::greet(){
	std::cout << "Здравствуйте, " << user_name << "!" << std::endl;
}