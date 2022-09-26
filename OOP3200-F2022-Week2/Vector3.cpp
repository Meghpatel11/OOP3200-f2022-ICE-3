#include "Vector3.h"

#include <sstream>
#include <iomanip>
#include <iostream>

Vector3::Vector3()
{
	Set(0.0f, 0.0f, 0.0f);
}

Vector3::Vector3(const float x, const float y, const float z)
{
	Set(x, y, z);
}

Vector3::~Vector3()
= default;

Vector3& Vector3::operator=(const Vector3& rhs)
{
	m_x = rhs.GetX();
	m_y = rhs.GetY();
	m_z = rhs.GetZ();
	return *this;
}

Vector3 Vector3::operator+(const Vector3& rhs) const
{
	Vector3 temp;
	temp.Set(GetX() + rhs.GetX(), GetY() + rhs.GetY(), GetZ() + rhs.GetZ());
	return temp;
}

Vector3 Vector3::operator-(const Vector3& rhs) const
{
	Vector3 temp;
	temp.Set(GetX() - rhs.GetX(), GetY() - rhs.GetY(), GetZ() - rhs.GetZ());
	return temp;
}

Vector3 Vector3::operator*(const Vector3& rhs) const
{
	Vector3 temp;
	temp.Set(GetX() * rhs.GetX(), GetY() * rhs.GetY(), GetZ() * rhs.GetZ());
	return temp;
}

Vector3 Vector3::operator*(float scalar)
{
	Vector3 temp;
	temp.Set(GetX() * scalar, GetY() * scalar, GetZ() * scalar);
	return temp;
}

Vector3 operator*(float scalar, Vector3& rhs)
{
	Vector3 temp;
	temp.Set(rhs.m_x * scalar, rhs.m_y * scalar, rhs.m_z * scalar);
	return temp;
}

std::ostream& operator<<(std::ostream& out, Vector3& rhs)
{
	out << rhs.to_string();
	return out;
}

std::istream& operator>>(std::istream& in, Vector3& rhs)
{
	std::cout << "X: ";
	in >> rhs.m_x;
	in.ignore();
	std::cout << "Y: ";
	in >> rhs.m_y;
	std::cout << "Z: ";
	in >> rhs.m_z;
	return in;
}

bool Vector3::operator==(const Vector3& rhs) const
{
	return m_x == rhs.GetX() && m_y == rhs.GetY() && m_z == rhs.GetZ();
}

bool Vector3::operator!=(const Vector3& rhs) const
{
	return m_x != rhs.GetX() || m_y != rhs.GetY() || m_z != rhs.GetZ();
}

bool Vector3::operator>(const Vector3& rhs) const
{
	return Magnitude() > rhs.Magnitude();
}

bool Vector3::operator<(const Vector3& rhs) const
{
	return Magnitude() < rhs.Magnitude();
}

float Vector3::GetZ() const
{
	return m_z;
}

void Vector3::SetZ(const float z)
{
	m_z = z;
}

void Vector3::Set(const float x, const float y)
{
	SetX(x);
	SetY(y);
}

void Vector3::Set(const float x, const float y, const float z)
{
	SetX(x);
	SetY(y);
	SetZ(z);
}

float Vector3::Magnitude() const
{
	return sqrt(GetX() * GetX() + GetY() * GetY() + GetZ() * GetZ());
}

std::string Vector3::to_string() const
{
	std::stringstream stream;
	stream << std::fixed << std::setprecision(2) << "(" << GetX() << ", " << GetY() << ", " << GetZ() << ")" << std::endl;
	return stream.str();
}

float Vector3::Distance(const Vector3& vectorA, const Vector3& vectorB)
{
	// difference between x values
	const float deltaX = vectorB.GetX() - vectorA.GetX();
	// difference between y values
	const float deltaY = vectorB.GetY() - vectorA.GetY();
	// difference between z values
	const float deltaZ = vectorB.GetZ() - vectorA.GetZ();

	// return the result of the pythagorean formula
	return sqrt((deltaX * deltaX) + (deltaY * deltaY) + (deltaZ * deltaZ));
}
