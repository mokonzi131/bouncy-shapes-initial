#pragma once

#include "IRenderer.h"
#include <memory>
#include "BrushDeviceResource.h"

class CircleRenderer : public IRenderer {
public:
	CircleRenderer(std::shared_ptr<BrushDeviceResource> brush, Color4F color, float radius);

	void Render(ID2D1HwndRenderTarget& target, const MPoint2F& position) const override;

private:
	std::shared_ptr<BrushDeviceResource> _brushPtr;
	Color4F _color;
	float _radius;
};