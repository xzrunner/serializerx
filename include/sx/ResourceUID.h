#pragma once

#include <cstdint>

namespace sx
{

typedef uint64_t UID;

class GlyphStyle;

class ResourceUID
{
public:
	enum Type
	{
		RES_UNKNOWN = 0,
		RES_GLYPH   = 1,
	};

public:
	static UID Glyph(int unicode, const GlyphStyle& gs);

private:
	static const int DATA_SIZE = 56;

	static const uint64_t DATA_MASK = 0x00ffffffffffffff;
	static const uint64_t TYPE_MASK = 0xff00000000000000;

private:
	static UID Compose(uint64_t data, Type type);

}; // ResourceUID

}