#include "sx/StringHelper.h"

namespace sx
{

void StringHelper::Split(const std::string& src, const std::string& mid, std::vector<std::string>& dst)
{
	char* cstr = new char[src.length() + 1];
	std::strcpy(cstr, src.c_str());
	char* p = std::strtok(cstr, mid.c_str());
	while (p != 0)
	{
		dst.push_back(std::string(p));
		p = strtok(nullptr, mid.c_str());
	}
	delete[] cstr;
}

}