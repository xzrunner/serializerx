#include "sx/StringHelper.h"

#include <boost/locale/encoding.hpp>

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

std::string StringHelper::UTF8ToGBK(const char* str)
{
	return boost::locale::conv::from_utf(str, "GBK");
}

std::string StringHelper::GBKToUTF8(const char* str)
{
	return boost::locale::conv::to_utf<char>(str, "GBK");
}

}