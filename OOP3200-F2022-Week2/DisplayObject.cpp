#include "DisplayObject.h"
#include "Scene.h"

#include <sstream>
#include <iomanip>

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
	
}

void DisplayObject::Draw()
{
}

std::string DisplayObject::to_string()
{
	std::stringstream stream;
	stream << "Display Object Name : " << GetName() << std::endl;
	stream << "Transform           : " << std::endl;
	stream << "---------------------------" << std::endl;
	stream << GetTransform()->to_string();
	stream << "---------------------------" << std::endl;
	if(GetParent() != nullptr)
	{
		stream << "Parent Scene: " << GetParent()->GetName();
		stream << "---------------------------" << std::endl;
	}
	
	return stream.str();
}
