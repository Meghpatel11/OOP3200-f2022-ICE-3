#include "LineSegment.h"

#include <sstream>
#include <iomanip>
#include <iostream>

LineSegment::LineSegment()
{
	Set(Vector2::Zero(), Vector2::Zero());
}

LineSegment::LineSegment(const Vector2& start, const Vector2& end)
{
	Set(start, end);
}

LineSegment::~LineSegment()
= default;

Vector2 LineSegment::GetStart()
{
	return m_start;
}

void LineSegment::SetStart(const Vector2& start)
{
	m_start = start;
}

Vector2 LineSegment::GetEnd()
{
	return m_end;
}

void LineSegment::SetEnd(const Vector2& end)
{
	m_end = end;
}

void LineSegment::Set(const Vector2& start, const Vector2& end)
{
	SetStart(start);
	SetEnd(end);
}

float LineSegment::GetLength()
{
	return Vector2::Distance(GetStart(), GetEnd());
}

std::string LineSegment::to_string()
{
	std::stringstream stream;
	stream << std::fixed << std::setprecision(2) << "Start: (" << GetStart().GetX() << ", " << GetStart().GetY() << ")\n";
	stream << std::fixed << std::setprecision(2) << "End  : (" << GetEnd().GetX() << ", " << GetEnd().GetY() << ")" << std::endl;
	return stream.str();
}
