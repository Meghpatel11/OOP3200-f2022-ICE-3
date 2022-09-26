#pragma once
#ifndef __Vector_3__
#define __Vector_3__

#include "Vector2.h"
#include <string>

class Vector3 : public Vector2
{
public:
	// constructor(s)

	// default constructor
	Vector3();

	// parameterized constructor
	Vector3(float x, float y, float z);

	// copy constructor (you to do)
	// move constructor (you to do)

	// destructor
	~Vector3();

	// operator overloads
	Vector3& operator=(const Vector3& rhs);
	Vector3 operator+(const Vector3& rhs) const;
	Vector3 operator-(const Vector3& rhs) const;
	Vector3 operator*(const Vector3& rhs) const;
	Vector3 operator*(float scalar);
	friend Vector3 operator*(float scalar, Vector3& rhs);

	friend std::ostream& operator<<(std::ostream& out, Vector3& rhs);
	friend std::istream& operator>>(std::istream& in, Vector3& rhs);

	bool operator==(const Vector3& rhs) const;
	bool operator!=(const Vector3& rhs) const;
	bool operator>(const Vector3& rhs) const;
	bool operator<(const Vector3& rhs) const;

	// public properties (getters and setters)
	float GetZ() const;
	void SetZ(float z);

	void Set(float x, float y);
	void Set(float x, float y, float z);

	// computed properties
	float Magnitude() const;

	// public methods
	std::string to_string() const;

	// Public static methods
	static float Distance(const Vector3& vectorA, const Vector3& vectorB);

private:
	// private instance members (fields)
	float m_z;
};

#endif /* defined (__Vector_3__)*/

