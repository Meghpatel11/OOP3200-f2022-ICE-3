#pragma once
#ifndef __VECTOR_2__
#define __VECTOR_2__
#include <string>

class Vector2
{
public:
	// Constructors

	// Default Constructor
	Vector2();

	// Paramaterized Constructors
	Vector2(float value);
	Vector2(float x, float y);

	// Destructor
	~Vector2();

	// Operator Overloads
	Vector2& operator=(const Vector2& rhs);
	Vector2 operator+(const Vector2& rhs) const;
	Vector2 operator-(const Vector2& rhs) const;

	// For you to do
	Vector2 operator*(const Vector2& rhs) const; // scaling each component
	Vector2 operator*(float scalar) const;
	friend Vector2 operator*(float scalar, const Vector2& rhs);

	friend std::ostream& operator<<(std::ostream& out, const Vector2& rhs);
	friend std::istream& operator>>(std::istream& in, Vector2& rhs);

	// class Methods (public class functions)
	std::string to_string() const;

	// Getters (Accessors) and Setters (Mutators)
	// GETTERS (Accessors)
	float GetX() const;
	float GetY() const;

	// SETTERS (Mutators)
	void SetX(float x);
	void SetY(float y);
	void Set(float x, float y);

	// Public static methods
	static float Distance(const Vector2& vectorA, const Vector2& vectorB);

protected:
	// INSTANCE VARIABLES (Class Member Variables)
	float m_x{};
	float m_y{};
};

#endif /* defined (__VECTOR_2__) */