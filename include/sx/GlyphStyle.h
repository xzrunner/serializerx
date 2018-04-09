#pragma once

#include <painting2/GradientColor.h>

struct gtxt_glyph_style;

namespace sx
{

class GlyphStyle
{
public:
	int font;
	int font_size;
	pt2::GradientColor font_color;

	int edge;
	int edge_size;
	pt2::GradientColor edge_color;

public:
	GlyphStyle();
	GlyphStyle(const gtxt_glyph_style* gs);

	bool operator == (const GlyphStyle& style) const;

}; // GlyphStyle

}