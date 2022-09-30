#include <iostream>

#include "LineSegment.h"

int main()
{
    LineSegment segment = LineSegment();
    segment.Set("Line Segment A", Vector2(2.0f, 2.0f), Vector2(4.0f, 4.0f));

    std::cout << segment.to_string() << std::endl;

}

    
