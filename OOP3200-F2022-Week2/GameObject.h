#pragma once
#ifndef __GAME_OBJECT__
#define __GAME_OBJECT__

#include <string>
#include "Transform.h"

class GameObject
{
public:
	// constructor(s)
	GameObject(const std::string& name);

	// destructor
	~GameObject();

	// getters and setters
	std::string GetName();
	void SetName(const std::string& name);

	Transform* GetTransform();
	void SetTransform(const Transform& transform);

	// life-cycle functions
	virtual void Update();

	// utility functions
	virtual std::string to_string();
private:
	// instance variables (data fields)
	std::string m_name;
	Transform m_transform;
};

#endif /* defined (__GAME_OBJECT__) */

