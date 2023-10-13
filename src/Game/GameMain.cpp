#include "../Engine/Engine.h"

#include <iostream>


int main(int argc, char* args[])
{
    Engine& gameEngine = Engine::GetInstance();

    sf::RenderWindow window(sf::VideoMode(800, 600), "Game Engine - RP4K");

    gameEngine.Start(&window);

    return 0;
}
