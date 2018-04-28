#pragma once

#include <string>
#include <vector>

namespace sx
{

class StringHelper
{
public:
	static void Split(const std::string& src, const std::string& mid,
		std::vector<std::string>& dst);

	template<typename T>
	static std::string ToString(const T& d);

	template<typename T>
	static std::string ToStringWithPrecision(const T& d, const int n = 6);

	static std::string UTF8ToGBK(const char* str);
	static std::string GBKToUTF8(const char* str);

	static std::string Format(const std::string str, ...);

}; // StringHelper

}

#include "sx/StringHelper.inl"