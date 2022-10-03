#include <iostream>

#include <iostream>
#include <vector>

#include "GameObject.h"

int main()
{
    GameObject* player = new GameObject("Mario");
    player->GetTransform()->position.Set(10.0f, 20.0f);

    std::cout << player->to_string() << std::endl;

}

    
