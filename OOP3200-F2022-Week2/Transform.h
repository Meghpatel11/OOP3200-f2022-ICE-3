#pragma once
#ifndef __TRANSFORM__
#define __TRANSFORM__

#include "Vector2.h"

struct Transform
{
	Vector2 position;
	float rotation;
	Vector2 scale;

	// override the std to_string method
	std::string to_string() const;
};

#endif /* defined (__TRANSFORM__*/