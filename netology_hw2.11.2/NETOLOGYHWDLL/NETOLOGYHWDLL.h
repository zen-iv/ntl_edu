#pragma once

#ifdef NETOLOGYHWDLL_EXPORTS
#define NETOLOGYHWDLL_API __declspec(dllexport)
#else
#define NETOLOGYHWDLL_API __declspec(dllimport)
#endif

#include <iostream>
#include <string>


    class NETOLOGYHWDLL_API Leaver
    {
    public:
        Leaver(std::string sss) {
            user_name = sss;
        }
        void leave();

    private:
        std::string user_name;
    };
