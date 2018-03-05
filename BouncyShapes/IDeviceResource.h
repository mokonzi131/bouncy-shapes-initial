#pragma once

#include <d2d1.h>

class IDeviceResource {
public:
	virtual void ReinitializeResource(ID2D1HwndRenderTarget& target) = 0;
};