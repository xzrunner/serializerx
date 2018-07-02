#include "sx/ResFileHelper.h"

#include <boost/filesystem.hpp>

namespace sx
{

ResFileType ResFileHelper::Type(const std::string& filepath)
{
	ResFileType type = RES_FILE_UNKNOWN;
	auto ext = boost::filesystem::extension(filepath);
	std::transform(ext.begin(), ext.end(), ext.begin(), tolower);
	if (ext == ".png" || ext == ".jpg" || ext == ".bmp" || ext == ".ppm" || ext == ".pvr" || ext == ".pkm" || ext == ".dds") {
		type = RES_FILE_IMAGE;
	} else if (ext == ".json") {
		type = RES_FILE_JSON;
	} else if (ext == ".param" || ext == ".obj" || ext == ".m3d" || ext == ".x" || ext == ".xml" || ext == ".mdl" || ext == ".bsp") {
		type = RES_FILE_MODEL;
	} else if (ext == ".bin") {
		type = RES_FILE_BIN;
	}
	// quake
	else if (ext == ".wad") {
		type = RES_FILE_WAD;
	}
	return type;
}

}