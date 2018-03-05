#include "SquareRenderer.h"

using namespace std;

SquareRenderer::SquareRenderer(shared_ptr<BrushDeviceResource> brush, Color4F color, float side)
	: _brushPtr(brush), _color(color), _side(side)
{
}

void SquareRenderer::Render(ID2D1HwndRenderTarget & target, const MPoint2F & position) const
{
	auto color = D2D1_COLOR_F{ _color.r, _color.g, _color.b, _color.a };
	_brushPtr->GetBrush()->SetColor(color);
	auto rect = D2D1::RectF(position.x - _side / 2, position.y - _side / 2, position.x + _side / 2, position.y + _side / 2);
	target.FillRectangle(rect, _brushPtr->GetBrush().Get());
}
