#pragma once
#include <string>

#ifdef NETOLOGYHWDLL_EXPORTS
#define NETOLOGYHWLIB_API __declspec(dllexport)
#else
#define NETOLOGYHWLIB_API __declspec(dllimport)
#endif
namespace Messages
{
	class Leaver
	{
	public:
		Leaver(std::string sss) {
			user_name = sss;
		}
		NETOLOGYHWLIB_API void leave();

	private:
		std::string user_name;
	};
};