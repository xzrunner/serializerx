#pragma once

#include <string>

namespace sx
{

enum ResFileType
{
	RES_FILE_UNKNOWN = 0,
	RES_FILE_IMAGE,
	RES_FILE_JSON,
	RES_FILE_MODEL,
	RES_FILE_BIN,

	// quake
	RES_FILE_WAD = 1024,
	RES_FILE_MAP,
};

class ResFileHelper
{
public:
	static ResFileType Type(const std::string& filepath);

}; // ResFileHelper

}