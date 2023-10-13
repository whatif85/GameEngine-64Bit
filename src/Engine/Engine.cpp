#include "Engine.h"

Engine& Engine::GetInstance(void)
{
	static Engine instance;
	return instance;
}

void Engine::Start(sf::RenderWindow* win)
{
	this->bQuit = false;
	this->window = win;

	while (window->isOpen() == true)
	{
		this->Update();
	}
}

void Engine::Update()
{
	sf::Event event;

	while (window->pollEvent(event) == true)
	{
		if (event.type == sf::Event::Closed)
		{
			window->close();
		}
	}
}
