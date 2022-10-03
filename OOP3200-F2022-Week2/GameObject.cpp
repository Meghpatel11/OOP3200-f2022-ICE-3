#include "GameObject.h"

#include <sstream>
#include <iomanip>

GameObject::GameObject(const std::string& name)
{
	SetName(name);
	GetTransform()->scale.Set(1.0f, 1.0f);
	GetTransform()->rotation = 0.0f;
}

GameObject::~GameObject()
= default;

std::string GameObject::GetName()
{
	return m_name;
}

void GameObject::SetName(const std::string& name)
{
	m_name = name;
}

Transform* GameObject::GetTransform()
{
	return &m_transform;
}

void GameObject::SetTransform(const Transform& transform)
{
	m_transform = transform;
}

void GameObject::Update()
{
}


std::string GameObject::to_string()
{
	std::stringstream stream;
	stream << "GameObject Name : " << GetName() << std::endl;
	stream << "Transform       : " << std::endl;
	stream << "---------------------------" << std::endl;
	stream << GetTransform()->to_string();
	stream << "---------------------------" << std::endl;
	return stream.str();
}
