#include <iostream>

#include "Vector3.h"

int main()
{
    Vector3 A = Vector3(10.0f, 20.0f, 30.0f);
    Vector3 B = Vector3(20.0f, 30.0f, 40.0f);
    Vector3 C = Vector3(30.0f, 40.0f, 50.0f);
    float scalar = 3.0f;

    std::cout << (A * scalar).to_string() << std::endl;
    std::cout << (scalar * B).to_string() << std::endl;

    std::cout << (A == B) << std::endl;
    std::cout << (A > B) << std::endl;
    std::cout << (A < B) << std::endl;
}

    
