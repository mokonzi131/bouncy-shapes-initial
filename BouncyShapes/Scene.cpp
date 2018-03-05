#include "Scene.h"

void Scene::insertGameObject(std::unique_ptr<GameObject>& object)
{
	_gameObjects.push_back(std::move(object));
}

void Scene::Update(double deltaTime)
{
	// TODO: update objects in the scene
}

void Scene::Draw(ID2D1HwndRenderTarget & target)
{
	for (auto& object : _gameObjects)
	{
		const auto& renderer = object->getRenderer();
		renderer.Render(target, object->getLocation());
	}
}
