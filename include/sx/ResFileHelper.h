#pragma once

#include <string>

namespace sx
{

enum ResFileType
{
	FILE_UNKNOWN = 0,
	FILE_IMAGE,
	FILE_JSON,
	FILE_MODEL,
};

class ResFileHelper
{
public:
	static ResFileType Type(const std::string& filepath);

}; // ResFileHelper

}