#include "sx/ResourceUID.h"
#include "sx/GlyphStyleID.h"

namespace sx
{

UID ResourceUID::Glyph(int unicode, const GlyphStyle& gs)
{
	uint64_t style_id = GlyphStyleID::Instance()->Gen(gs);
	uint64_t id = ((style_id & 0xffffffff) << 32) | unicode;
	return Compose(id, RES_GLYPH);
}

UID ResourceUID::Compose(uint64_t data, Type type)
{
	return (data & DATA_MASK) | ((uint64_t)type << DATA_SIZE);
}

}