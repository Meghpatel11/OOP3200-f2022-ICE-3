#pragma once
#ifndef __SCENE__
#define __SCENE__
#include <string>
#include <vector>

#include "DisplayObject.h"

class Scene
{
public:
	// Constructor(s)
	Scene(const std::string& name);

	// Destructor
	~Scene();

	// Scene Life-Cycle Functions
	void Draw();
	void Update();

	// Getters and Setters
	std::string GetName();
	void SetName(const std::string& name);

	// Public Utility Functions
	void AddChild(DisplayObject* child);
	void RemoveChild(DisplayObject* child);
	void RemoveAllChildren();

	// Public Overriden Functions
	std::string to_string();
private:
	// Instance Members
	std::string m_name;
	std::vector<DisplayObject*> m_pDisplayList;

	// Private Methods
	void updateDisplayList();
	void drawDisplayList();

};

#endif /* defined (__SCENE__) */

