#include "Scene.h"

#include <sstream>
#include <iomanip>

Scene::Scene(std::string& name)
{
	SetName(name);
}

Scene::~Scene()
= default;

void Scene::Draw()
{
	drawDisplayList();
}

void Scene::Update()
{
	updateDisplayList();
}

std::string Scene::GetName()
{
	return m_name;
}

void Scene::SetName(const std::string& name)
{
	m_name = name;
}

void Scene::AddChild(DisplayObject* child)
{
	child->SetParent(this);
	m_pDisplayList.push_back(child);
}

void Scene::RemoveChild(DisplayObject* child)
{
	child->SetParent(nullptr);
	m_pDisplayList.erase(std::remove(m_pDisplayList.begin(), m_pDisplayList.end(), child), m_pDisplayList.end());
}

void Scene::RemoveAllChildren()
{
	for (const auto display_object : m_pDisplayList)
	{
		display_object->SetParent(nullptr);
	}
	m_pDisplayList.clear();
}

std::string Scene::to_string()
{
	std::stringstream stream;
	stream << "Scene Name : " << GetName() << std::endl;
	stream << "---------------------------" << std::endl;
	stream << "Display List             : " << std::endl;
	stream << "---------------------------" << std::endl;

	for (const auto display_object : m_pDisplayList)
	{
		stream << display_object->to_string();
	}

	stream << "---------------------------" << std::endl;
	return stream.str();
}

void Scene::updateDisplayList()
{
	for (const auto display_object : m_pDisplayList)
	{
		display_object->Update();
	}
}

void Scene::drawDisplayList()
{

	for (const auto display_object : m_pDisplayList)
	{
		display_object->Draw();
	}
}
