#include "BrushDeviceResource.h"

#ifdef DEBUG
#define HR(expression) ASSERT(S_OK == (expression))
#else
struct ComException
{
	HRESULT const hr;
	ComException(HRESULT const value) : hr(value) {}
};

inline void HR(HRESULT hr)
{
	if (S_OK != hr) throw ComException(hr);
}
#endif

void BrushDeviceResource::ReinitializeResource(ID2D1HwndRenderTarget & target)
{
	HR(target.CreateSolidColorBrush(COLOR_BLUE, _brush.ReleaseAndGetAddressOf()));
	_brush->SetOpacity(1.f);
}

Microsoft::WRL::ComPtr<ID2D1SolidColorBrush> BrushDeviceResource::GetBrush()
{
	return _brush;
}

const D2D1_COLOR_F BrushDeviceResource::COLOR_BLUE = { 0.26f, 0.56f, 0.87f, 1.f };
