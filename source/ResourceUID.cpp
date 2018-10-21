#include "sx/ResourceUID.h"
#include "sx/GlyphStyleID.h"

namespace sx
{

UID ResourceUID::Glyph(int unicode, const GlyphStyle& gs)
{
	uint64_t style_id = GlyphStyleID::Instance()->Gen(gs);
	uint64_t id = ((style_id & 0xffffffff) << 32) | unicode;
	return Compose(id, KeyType::GLYPH);
}

UID ResourceUID::String(const std::string& str)
{
	size_t id = std::hash<std::string>()(str);
	return Compose(id, KeyType::STRING);
}

UID ResourceUID::Compose(uint64_t data, KeyType type)
{
	return (data & DATA_MASK) | ((uint64_t)type << DATA_SIZE);
}

UID ResourceUID::TexQuad(size_t tex_id, int xmin, int ymin, int xmax, int ymax)
{
	uint64_t id = tex_id;
	id = (id << 12) | xmin;
	id = (id << 12) | ymin;
	id = (id << 12) | xmax;
	id = (id << 12) | ymax;
	return Compose(id, KeyType::TEX_QUAD);
}

}