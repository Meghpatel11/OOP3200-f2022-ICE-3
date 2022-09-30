#pragma once
#ifndef __LINE_SEGMENT__
#define __LINE_SEGMENT__
#include "Vector2.h"
#include <string>

class LineSegment
{
public:
	// Constructor(s)
	LineSegment();

	LineSegment(Vector2 start, Vector2 end);

	// Destructor
	~LineSegment();

	// Getters (Accessors) & Setters (Mutators)
	Vector2 GetStart();
	void SetStart(const Vector2& start);

	Vector2 GetEnd();
	void SetEnd(const Vector2& end);

	void Set(Vector2 start, Vector2 end);

	// Computed Properties
	float GetLength();

	// Public Methods (class functions)

	// Public Overridden methods
	std::string to_string();
private:
	// Private methods


	// private instance members (fields - store data here)
	Vector2 m_start;
	Vector2 m_end;
};


#endif /* defined (__LINE_SEGMENT__)*/