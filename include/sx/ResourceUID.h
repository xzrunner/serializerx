#pragma once

#include <cstdint>
#include <string>

namespace sx
{

typedef uint64_t UID;

class GlyphStyle;

class ResourceUID
{
public:
	enum class KeyType
	{
		GLYPH = 0,
		STRING,
		TEX_QUAD,
	};

public:
	static UID Glyph(int unicode, const GlyphStyle& gs);
	static UID String(const std::string& str);
	static UID TexQuad(size_t tex_id, int xmin, int ymin, int xmax, int ymax);

private:
	static const int DATA_SIZE = 56;

	static const uint64_t DATA_MASK = 0x00ffffffffffffff;
	static const uint64_t TYPE_MASK = 0xff00000000000000;

private:
	static UID Compose(uint64_t data, KeyType type);

}; // ResourceUID

}