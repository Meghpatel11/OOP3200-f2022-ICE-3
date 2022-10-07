#include <iostream>

#include <iostream>
#include <vector>

#include "GameObject.h"
#include "Scene.h"

int main()
{
	const auto mainScene = new Scene("Main");

    // Display Objects
    const auto player = new DisplayObject("Mario");
    player->GetTransform()->position.Set(10.0f, 20.0f);
    mainScene->AddChild(player);

    const auto enemy = new DisplayObject("Enemy");
    enemy->GetTransform()->position.Set(20.0f, 30.0f);
    mainScene->AddChild(enemy);
    
    std::cout << mainScene->to_string() << std::endl;

    std::cout << "\n--------------------------------------------" << std::endl;
    std::cout << "Distance between " << player->GetName() << " and " << enemy->GetName() << " is: " <<
        Vector2::Distance(player->GetTransform()->position, enemy->GetTransform()->position) << std::endl;
    std::cout << "--------------------------------------------\n" << std::endl;

    mainScene->RemoveAllChildren();

    std::cout << player->to_string() << std::endl;
    std::cout << enemy->to_string() << std::endl;

}

    
