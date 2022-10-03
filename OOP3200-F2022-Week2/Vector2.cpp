#include "Vector2.h"

#include <sstream>
#include <iomanip>
#include <iostream>

Vector2::Vector2()
{
	Set(0.0f, 0.0f);
}

Vector2::Vector2(const float value)
{
	Set(value, value);
}

Vector2::Vector2(float x, float y)
{
	Set(x, y);
}

Vector2::~Vector2()
= default;

Vector2& Vector2::operator=(const Vector2& rhs)
{
	Set(rhs.GetX(), rhs.GetY());
	return *this;
}

Vector2 Vector2::operator+(const Vector2& rhs) const
{
	Vector2 temp;
	temp.Set(GetX() + rhs.GetX(), GetY() + rhs.GetY());
	return temp;
}

Vector2 Vector2::operator-(const Vector2& rhs) const
{
	Vector2 temp;
	temp.Set(GetX() - rhs.GetX(), GetY() - rhs.GetY());
	return temp;
}

Vector2 Vector2::operator*(const Vector2& rhs) const
{
	Vector2 temp;
	temp.Set(GetX() * rhs.GetX(), GetY() * rhs.GetY());
	return temp;
}

Vector2 Vector2::operator*(const float scalar) const
{
	// C = A * 3
	Vector2 temp;
	temp.Set(GetX() * scalar, GetY() * scalar);
	return temp;
}

Vector2 operator*(const float scalar, const Vector2& rhs)
{
	// C = 3 * A
	Vector2 temp;
	temp.Set(rhs.m_x * scalar, rhs.m_y * scalar);
	return temp;
}


std::string Vector2::to_string() const
{
	std::stringstream stream;
	stream << std::fixed << std::setprecision(2) << "(" << GetX() << ", " << GetY() << ")" << std::endl;
	return stream.str();
}

float Vector2::GetX() const
{
	return m_x;
}

float Vector2::GetY() const
{
	return m_y;
}

void Vector2::SetX(const float x)
{
	m_x = x;
}

void Vector2::SetY(const float y)
{
	m_y = y;
}

void Vector2::Set(const float x, const float y)
{
	SetX(x);
	SetY(y);
}

float Vector2::Distance(const Vector2& vectorA, const Vector2& vectorB)
{
	// difference between x values
	const float deltaX = vectorB.GetX() - vectorA.GetX();
	// difference between y values
	const float deltaY = vectorB.GetY() - vectorA.GetY();

	// return the result of the pythagorean formula
	return sqrt((deltaX * deltaX) + (deltaY * deltaY));
}

Vector2 Vector2::Zero()
{
	return {0.0f, 0.0f};
}

Vector2 Vector2::One()
{
	return { 1.0f, 1.0f };
}

Vector2 Vector2::Right()
{
	return { 1.0f, 0.0f };
}

Vector2 Vector2::Left()
{
	return { -1.0f, 0.0f };
}

Vector2 Vector2::Up()
{
	return { 0.0f, -1.0f };
}

Vector2 Vector2::Down()
{
	return { 0.0f, 1.0f };
}


std::ostream& operator<<(std::ostream& out, const Vector2& rhs)
{
	out << rhs.to_string();
	return out;
}

std::istream& operator>>(std::istream& in, Vector2& rhs)
{
	std::cout << "X: ";
	in >> rhs.m_x;
	in.ignore();
	std::cout << "Y: ";
	in >> rhs.m_y;
	return in;
}
