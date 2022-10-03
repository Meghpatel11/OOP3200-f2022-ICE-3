#include "DisplayObject.h"
#include "Scene.h"

DisplayObject::DisplayObject(const std::string& name): GameObject(name)
{
	SetParent(nullptr);
}

DisplayObject::~DisplayObject()
= default;

Scene* DisplayObject::GetParent() const
{
	return m_pParent;
}

void DisplayObject::SetParent(Scene* scene)
{
	m_pParent = scene;
}

void DisplayObject::Update()
{
	GameObject::Update();
}

void DisplayObject::Draw()
{
}

std::string DisplayObject::to_string()
{
	// TODO: need to work on this
	return GameObject::to_string();
}
