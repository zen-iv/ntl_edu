#include "NETOLOGYHWDLL.h"
#include <iostream>
#include <string>

    NETOLOGYHWDLL_API void Leaver::leave() {
        setlocale(LC_ALL, "RU");
        std::cout << "�� ��������, " << user_name << "!" << std::endl;
    }