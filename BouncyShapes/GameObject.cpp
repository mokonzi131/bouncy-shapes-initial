#include "GameObject.h"

GameObject::GameObject(std::shared_ptr<IRenderer> renderer, MPoint2F location)
	: _rendererPtr(renderer), _location(location)
{
}

const IRenderer & GameObject::getRenderer()
{
	return *_rendererPtr;
}

const MPoint2F & GameObject::getLocation()
{
	return _location;
}
