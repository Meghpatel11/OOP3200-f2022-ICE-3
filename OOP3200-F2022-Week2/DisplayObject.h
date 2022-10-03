#pragma once
#ifndef __DISPLAY_OBJECT__
#define __DISPLAY_OBJECT__

#include "GameObject.h"
class DisplayObject : public GameObject
{
public:
	friend class Scene;

	// Constructor(s)
	DisplayObject(const std::string& name);

	// Destructor
	~DisplayObject();

	// Getters and Setters
	Scene* GetParent() const;
	void SetParent(Scene* scene);

	// Life-Cycle Functions
	void Update() override;
	virtual void Draw();

	// Utility Methods
	std::string to_string() override;

private:
	// instance variables (Data fields)
	Scene* m_pParent{};
};

#endif /* defined (__DISPLAY_OBJECT__) */
