#include "CircleRenderer.h"

using namespace std;

CircleRenderer::CircleRenderer(shared_ptr<BrushDeviceResource> brush, Color4F color, float radius)
	: _brushPtr(brush), _color(color), _radius(radius)
{
}

void CircleRenderer::Render(ID2D1HwndRenderTarget& target, const MPoint2F& position) const
{
	auto color = D2D1_COLOR_F{ _color.r, _color.g, _color.b, _color.a };
	_brushPtr->GetBrush()->SetColor(color);
	auto center = D2D1::Point2F(position.x, position.y);
	auto ellipse = D2D1::Ellipse(center, _radius, _radius);
	target.FillEllipse(ellipse, _brushPtr->GetBrush().Get());
}
