#pragma once
#include <string>

namespace Messages
{
	class Leaver
	{
	public:
		Leaver(std::string sss) {
			user_name = sss;
		}
		void leave();

	private:
		std::string user_name;
	};
};