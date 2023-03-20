#include "Leaver.h"
#include <iostream>
#include <string>

namespace Messages
{
    void  Leaver::leave() {
        setlocale(LC_ALL, "RU");
        std::cout << "До свидания, " << user_name << "!" << std::endl;
    }
}