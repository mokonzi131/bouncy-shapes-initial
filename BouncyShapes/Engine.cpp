#include "Engine.h"

Engine::Engine()
	: _deviceResources()
{
}

void Engine::AddDeviceResource(std::shared_ptr<IDeviceResource> resource)
{
	_deviceResources.push_back(resource);
}

void Engine::ResetDeviceResource(ID2D1HwndRenderTarget & target)
{
	for (auto resource : _deviceResources)
	{
		resource->ReinitializeResource(target);
	}
}
