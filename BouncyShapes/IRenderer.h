#pragma once

#include <d2d1.h>

#include "GeometryPrimitives.h"

class IRenderer {
public:
	virtual ~IRenderer() = default;
	virtual void Render(ID2D1HwndRenderTarget& target, const MPoint2F& position) const = 0;
};