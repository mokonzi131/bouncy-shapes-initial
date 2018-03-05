#pragma once

#include <memory>
#include "BrushDeviceResource.h"
#include "IRenderer.h"

class SquareRenderer : public IRenderer {
public:
	SquareRenderer(std::shared_ptr<BrushDeviceResource> brush, Color4F color, float side);
	
	void Render(ID2D1HwndRenderTarget& target, const MPoint2F& position) const override;

private:
	std::shared_ptr<BrushDeviceResource> _brushPtr;
	Color4F _color;
	float _side;
};