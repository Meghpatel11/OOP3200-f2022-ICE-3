#include "Transform.h"

#include <sstream>
#include <iomanip>

std::string Transform::to_string() const
{
	std::stringstream stream;
	stream << "Position  : " << position.to_string() << std::endl;
	stream << std::fixed << std::setprecision(2) << "Z Rotation: " << rotation << std::endl;
	stream << "Scale     : " << scale.to_string() << std::endl;
	return stream.str();
}
