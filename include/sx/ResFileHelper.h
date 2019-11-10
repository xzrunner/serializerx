#pragma once

#include <string>

namespace sx
{

enum ResFileType
{
	RES_FILE_UNKNOWN = 0,
	RES_FILE_IMAGE,
	RES_FILE_IMAGE3D,
	RES_FILE_JSON,
	RES_FILE_MODEL,
	RES_FILE_BIN,
	RES_FILE_SCRIPT,

    // shader
    RES_FILE_SHADER,
    RES_FILE_ASSET,

    // script
    RES_FILE_PYTHON,
    RES_FILE_LUA,

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