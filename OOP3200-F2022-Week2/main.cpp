#include <iostream>

#include "Vector2.h"
#include <vector>

int main()
{
    // replace the following code (which is a sample) with 3 LineSegment objects instead

    std::vector<Vector2*> vector2s;

    for (int i = 0; i < 5; ++i)
    {
        vector2s.push_back(new Vector2(static_cast<float>(i), static_cast<float>(i)));
    }

    // ranged for loop
    for (const auto& vector2 : vector2s)
    {
        std::cout << vector2->to_string() << std::endl;
    }

}

    
