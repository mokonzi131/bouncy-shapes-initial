#pragma once

#include <wrl.h>
#include "IDeviceResource.h"

class BrushDeviceResource : public IDeviceResource {
public:
	void ReinitializeResource(ID2D1HwndRenderTarget& target) override;

	Microsoft::WRL::ComPtr<ID2D1SolidColorBrush> GetBrush();

private:
	static const D2D1_COLOR_F COLOR_BLUE;
	Microsoft::WRL::ComPtr<ID2D1SolidColorBrush> _brush;
};