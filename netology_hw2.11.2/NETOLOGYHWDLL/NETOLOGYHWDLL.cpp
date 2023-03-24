#include "NETOLOGYHWDLL.h"
#include <iostream>
#include <string>

    NETOLOGYHWDLL_API void Leaver::leave() {
        setlocale(LC_ALL, "RU");
        std::cout << "До свидания, " << user_name << "!" << std::endl;
    }