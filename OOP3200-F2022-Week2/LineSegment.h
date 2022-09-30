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

	LineSegment(const Vector2& start, const Vector2& end);

	LineSegment(const std::string& name, const Vector2& start, const Vector2& end);

	// Destructor
	~LineSegment();

	// Getters (Accessors) & Setters (Mutators)
	Vector2 GetStart();
	void SetStart(const Vector2& start);

	Vector2 GetEnd();
	void SetEnd(const Vector2& end);

	std::string GetName();
	void SetName(const std::string& name);

	void Set(const Vector2& start, const Vector2& end);
	void Set(const std::string& name, const Vector2& start, const Vector2& end);

	// Computed Properties
	float GetLength();

	// Public Methods (class functions)

	// Public Overridden methods
	std::string to_string();
private:
	// Private methods


	// private instance members (fields - store data here)
	std::string m_name;
	Vector2 m_start;
	Vector2 m_end;
};


#endif /* defined (__LINE_SEGMENT__)*/