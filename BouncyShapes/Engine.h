#pragma once

#include <vector>
#include <memory>
#include "IDeviceResource.h"

class Engine {
public:
	Engine();

	void AddDeviceResource(std::shared_ptr<IDeviceResource> resource);

	void ResetDeviceResource(ID2D1HwndRenderTarget& target);

private:
	std::vector<std::shared_ptr<IDeviceResource>> _deviceResources;
};